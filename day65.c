// Problem: Using DFS and parent tracking, detect if undirected graph has a cycle.

// Output:
// - YES or NO

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int visited[MAX];

// DFS function to detect cycle
int dfs(int node, int parent, int adj[MAX][MAX], int n) {
    visited[node] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[node][i]) {  // if there is an edge
            if (!visited[i]) {
                // visit the neighbor
                if (dfs(i, node, adj, n))
                    return 1;
            }
            else if (i != parent) {
                // visited and not parent → cycle detected
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n, edges;
    int adj[MAX][MAX] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1;  // undirected graph
    }

    // initialize visited array
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    // check for cycle in all components
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (dfs(i, -1, adj, n)) {
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}