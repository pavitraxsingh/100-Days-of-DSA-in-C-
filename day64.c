// Problem: Perform BFS from a given source using queue.

// Input::
// - n
// - adjacency list
// - source s

// Output:
// - BFS traversal order

#include <stdio.h>

#define MAX 100   // Maximum number of nodes

// Queue implementation using array
int queue[MAX];
int front = -1, rear = -1;

// Function to insert element into queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    // If queue is empty, initialize front
    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;   // Insert element at rear
}

// Function to remove element from queue
int dequeue() {
    if (front == -1 || front > rear) {
        return -1;  // Queue empty
    }

    int value = queue[front];
    front++;        // Move front forward
    return value;
}

// BFS function
void bfs(int n, int adj[MAX][MAX], int source) {
    int visited[MAX] = {0};   // Array to track visited nodes

    // Step 1: Start from source node
    enqueue(source);          // Push source into queue
    visited[source] = 1;      // Mark source as visited

    printf("BFS Traversal: ");

    // Step 2: Repeat until queue becomes empty
    while (front <= rear) {
        int current = dequeue();   // Remove front node
        printf("%d ", current);    // Print it

        // Step 3: Visit all adjacent nodes
        for (int i = 0; i < n; i++) {

            // If there is an edge AND node not visited
            if (adj[current][i] == 1 && visited[i] == 0) {

                enqueue(i);        // Add to queue
                visited[i] = 1;    // Mark as visited
            }
        }
    }
}

int main() {
    int n, source;
    int adj[MAX][MAX];   // Adjacency matrix

    // Input number of nodes
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Input adjacency matrix
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    // Input source node
    printf("Enter source node: ");
    scanf("%d", &source);

    // Call BFS function
    bfs(n, adj, source);

    return 0;
}
