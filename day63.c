// Problem: Perform DFS starting from a given source vertex using recursion.

// Input:
// - n
// - adjacency list
// - starting vertex s

// Output:
// - DFS traversal order

#include <stdio.h>

#define MAX 100

int visited[MAX];      // To track visited nodes
int adj[MAX][MAX];     // Adjacency matrix

void dfs(int node, int n) {
    printf("%d ", node);   // Print current node
    visited[node] = 1;     // Mark as visited

    for (int i = 0; i < n; i++) {
        if (adj[node][i] == 1 && visited[i] == 0) {
            dfs(i, n);     // Recursive call
        }
    }
}

int main() {
    int n, s;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &s);

    // Initialize visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("DFS Traversal: ");
    dfs(s, n);

    return 0;
}