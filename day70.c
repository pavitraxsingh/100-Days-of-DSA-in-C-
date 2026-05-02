
// Problem: Compute shortest path from source and detect negative weight cycles using Bellman-Ford.

// Input:
// - n vertices
// - m edges (u,v,w)

// Output:
// // - Shortest distances OR NEGATIVE CYCLE

#include <stdio.h>
#include <limits.h>

#define MAX 100

struct Edge {
    int u, v, w;
};

void bellmanFord(int n, int m, struct Edge edges[], int source) {
    int dist[MAX];

    // Step 1: Initialize distances
    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    dist[source] = 0;

    // Step 2: Relax edges n-1 times
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j < m; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Step 3: Check for negative weight cycle
    for (int j = 0; j < m; j++) {
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].w;

        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            printf("NEGATIVE CYCLE\n");
            return;
        }
    }

    // Print shortest distances
    printf("Vertex\tDistance from Source\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", i, dist[i]);
    }
}

int main() {
    int n = 5; // number of vertices
    int m = 8; // number of edges

    struct Edge edges[] = {
        {0,1,-1}, {0,2,4}, {1,2,3}, {1,3,2},
        {1,4,2}, {3,2,5}, {3,1,1}, {4,3,-3}
    };

    bellmanFord(n, m, edges, 0);

    return 0;
=======
// Problem: Compute shortest path from source and detect negative weight cycles using Bellman-Ford.

// Input:
// - n vertices
// - m edges (u,v,w)

// Output:
// // - Shortest distances OR NEGATIVE CYCLE

#include <stdio.h>
#include <limits.h>

#define MAX 100

struct Edge {
    int u, v, w;
};

void bellmanFord(int n, int m, struct Edge edges[], int source) {
    int dist[MAX];

    // Step 1: Initialize distances
    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    dist[source] = 0;

    // Step 2: Relax edges n-1 times
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j < m; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Step 3: Check for negative weight cycle
    for (int j = 0; j < m; j++) {
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].w;

        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            printf("NEGATIVE CYCLE\n");
            return;
        }
    }

    // Print shortest distances
    printf("Vertex\tDistance from Source\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", i, dist[i]);
    }
}

int main() {
    int n = 5; // number of vertices
    int m = 8; // number of edges

    struct Edge edges[] = {
        {0,1,-1}, {0,2,4}, {1,2,3}, {1,3,2},
        {1,4,2}, {3,2,5}, {3,1,1}, {4,3,-3}
    };

    bellmanFord(n, m, edges, 0);

    return 0;
>>>>>>> 2f7ab0c (Commit for April 22)
}
