// Problem: Perform DFS starting from a given source vertex using recursion.

// Input::
// - n
// - adjacency list
// - starting vertex s

// Output:
// - DFS traversal order
#include <stdio.h>

#define MAX 100

int n;
int adj[MAX][MAX];
int visited[MAX];

// Recursive DFS function
void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v + 1);  // convert to 1-based output

    for (int i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int m, s;

    scanf("%d", &n);
    scanf("%d", &m);

    // initialize adjacency matrix
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    // input edges (assume 1-based input)
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        u--;
        v--;
        adj[u][v] = 1;

        // If undirected graph, uncomment:
        adj[v][u] = 1;
    }

    scanf("%d", &s);
    s--;

    dfs(s);

    return 0;
}
