<<<<<<< HEAD
// Problem: Print topological ordering of a Directed Acyclic Graph (DAG) using DFS.
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int graph[MAX][MAX];   // Adjacency matrix
int visited[MAX];      // To track visited nodes
int stack[MAX];        // Stack to store result
int top = -1;          // Stack pointer

// DFS function
void dfs(int v, int n) {
    visited[v] = 1;

    // Visit all adjacent vertices
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            dfs(i, n);
        }
    }

    // Push node to stack after visiting all neighbors
    stack[++top] = v;
}

// Function to perform Topological Sort
void topologicalSort(int n) {
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, n);
        }
    }

    // Print stack in reverse order
    printf("Topological Order: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
}

int main() {
    int n, e, u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    // Initialize graph and visited
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    // Input edges
    printf("Enter edges (u v) meaning u -> v:\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
    }

    topologicalSort(n);

    return 0;
=======
// Problem: Print topological ordering of a Directed Acyclic Graph (DAG) using DFS.
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int graph[MAX][MAX];   // Adjacency matrix
int visited[MAX];      // To track visited nodes
int stack[MAX];        // Stack to store result
int top = -1;          // Stack pointer

// DFS function
void dfs(int v, int n) {
    visited[v] = 1;

    // Visit all adjacent vertices
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            dfs(i, n);
        }
    }

    // Push node to stack after visiting all neighbors
    stack[++top] = v;
}

// Function to perform Topological Sort
void topologicalSort(int n) {
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, n);
        }
    }

    // Print stack in reverse order
    printf("Topological Order: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
}

int main() {
    int n, e, u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    // Initialize graph and visited
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    // Input edges
    printf("Enter edges (u v) meaning u -> v:\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
    }

    topologicalSort(n);

    return 0;
>>>>>>> 2f7ab0c (Commit for April 22)
}