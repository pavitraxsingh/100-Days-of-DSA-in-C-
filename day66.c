<<<<<<< HEAD
// Problem: Detect cycle in directed graph using DFS and recursion stack.

// Output:
// - YES if cycle exists
#include <stdio.h>

#define MAX 100

int graph[MAX][MAX];   // adjacency matrix
int visited[MAX];      // visited array
int recStack[MAX];     // recursion stack

// DFS function
int dfs(int node, int V) {
    visited[node] = 1;     // mark visited
    recStack[node] = 1;    // add to recursion stack

    for (int i = 0; i < V; i++) {
        if (graph[node][i]) {   // if edge exists
            if (!visited[i]) {
                if (dfs(i, V))
                    return 1;   // cycle found
            }
            else if (recStack[i]) {
                return 1;       // cycle found
            }
        }
    }

    recStack[node] = 0;   // remove from stack
    return 0;
}

// check cycle in graph
int hasCycle(int V) {
    for (int i = 0; i < V; i++) {
        visited[i] = 0;
        recStack[i] = 0;
    }

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, V))
                return 1;
        }
    }
    return 0;
}

int main() {
    int V, E, u, v;

    printf("Enter vertices and edges: ");
    scanf("%d %d", &V, &E);

    // initialize graph
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            graph[i][j] = 0;

    printf("Enter edges (u v):\n");
    for (int i = 0; i < E; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;   // directed edge
    }

    if (hasCycle(V))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
=======
// Problem: Detect cycle in directed graph using DFS and recursion stack.

// Output:
// - YES if cycle exists
#include <stdio.h>

#define MAX 100

int graph[MAX][MAX];   // adjacency matrix
int visited[MAX];      // visited array
int recStack[MAX];     // recursion stack

// DFS function
int dfs(int node, int V) {
    visited[node] = 1;     // mark visited
    recStack[node] = 1;    // add to recursion stack

    for (int i = 0; i < V; i++) {
        if (graph[node][i]) {   // if edge exists
            if (!visited[i]) {
                if (dfs(i, V))
                    return 1;   // cycle found
            }
            else if (recStack[i]) {
                return 1;       // cycle found
            }
        }
    }

    recStack[node] = 0;   // remove from stack
    return 0;
}

// check cycle in graph
int hasCycle(int V) {
    for (int i = 0; i < V; i++) {
        visited[i] = 0;
        recStack[i] = 0;
    }

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, V))
                return 1;
        }
    }
    return 0;
}

int main() {
    int V, E, u, v;

    printf("Enter vertices and edges: ");
    scanf("%d %d", &V, &E);

    // initialize graph
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            graph[i][j] = 0;

    printf("Enter edges (u v):\n");
    for (int i = 0; i < E; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;   // directed edge
    }

    if (hasCycle(V))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
>>>>>>> 2f7ab0c (Commit for April 22)
