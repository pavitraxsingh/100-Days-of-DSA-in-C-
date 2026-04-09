// Problem: Implement topological sorting using in-degree array and queue (Kahnâ€™s Algorithm).
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue[MAX], front = -1, rear = -1;

// Enqueue
void enqueue(int x) {
    if (rear == MAX - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = x;
}

// Dequeue
int dequeue() {
    if (front == -1) return -1;
    int val = queue[front++];
    if (front > rear) front = rear = -1;
    return val;
}

// Check empty
int isEmpty() {
    return front == -1;
}

void topologicalSort(int V, int adj[MAX][MAX]) {
    int indegree[MAX] = {0};
    int result[MAX], k = 0;

    // Step 1: Calculate indegree
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (adj[i][j] == 1) {
                indegree[j]++;
            }
        }
    }

    // Step 2: Push nodes with indegree 0
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            enqueue(i);
        }
    }

    // Step 3: Process queue
    while (!isEmpty()) {
        int node = dequeue();
        result[k++] = node;

        // Reduce indegree of neighbors
        for (int j = 0; j < V; j++) {
            if (adj[node][j] == 1) {
                indegree[j]--;
                if (indegree[j] == 0) {
                    enqueue(j);
                }
            }
        }
    }

    // Step 4: Check cycle
    if (k != V) {
        printf("Cycle detected! Topological sort not possible.\n");
        return;
    }

    // Print result
    printf("Topological Order:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
}