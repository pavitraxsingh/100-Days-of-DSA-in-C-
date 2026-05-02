
// Problem Statement
// Given weighted undirected graph, compute total weight of Minimum Spanning Tree using Prim’s algorithm.

// Input Format
// n m
// u v w
// ...

// Output Format
// Total weight of MST.

// Sample Input
// 4 5
// 1 2 3
// 1 3 5
// 2 3 1
// 2 4 4
// 3 4 2

// Sample Output
// 6

// Explanation
// One possible MST edges: (2-3), (3-4), (1-2)
#include <stdio.h>
#include <limits.h>

#define MAX 100

int n, m;
int graph[MAX][MAX];
int visited[MAX];

int prim() {
    int min, u = 1, v;
    int totalWeight = 0;

    visited[1] = 1; // start from node 1

    for (int edges = 0; edges < n - 1; edges++) {
        min = INT_MAX;

        for (int i = 1; i <= n; i++) {
            if (visited[i]) {
                for (int j = 1; j <= n; j++) {
                    if (!visited[j] && graph[i][j] != 0 && graph[i][j] < min) {
                        min = graph[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        visited[v] = 1;
        totalWeight += min;
    }

    return totalWeight;
}

int main() {
    scanf("%d %d", &n, &m);

    // initialize graph with 0
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            graph[i][j] = 0;

    int u, v, w;
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
        graph[v][u] = w; // undirected graph
    }

    int result = prim();
    printf("%d\n", result);

    return 0;
=======
// Problem Statement
// Given weighted undirected graph, compute total weight of Minimum Spanning Tree using Prim’s algorithm.

// Input Format
// n m
// u v w
// ...

// Output Format
// Total weight of MST.

// Sample Input
// 4 5
// 1 2 3
// 1 3 5
// 2 3 1
// 2 4 4
// 3 4 2

// Sample Output
// 6

// Explanation
// One possible MST edges: (2-3), (3-4), (1-2)
#include <stdio.h>
#include <limits.h>

#define MAX 100

int n, m;
int graph[MAX][MAX];
int visited[MAX];

int prim() {
    int min, u = 1, v;
    int totalWeight = 0;

    visited[1] = 1; // start from node 1

    for (int edges = 0; edges < n - 1; edges++) {
        min = INT_MAX;

        for (int i = 1; i <= n; i++) {
            if (visited[i]) {
                for (int j = 1; j <= n; j++) {
                    if (!visited[j] && graph[i][j] != 0 && graph[i][j] < min) {
                        min = graph[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        visited[v] = 1;
        totalWeight += min;
    }

    return totalWeight;
}

int main() {
    scanf("%d %d", &n, &m);

    // initialize graph with 0
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            graph[i][j] = 0;

    int u, v, w;
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
        graph[v][u] = w; // undirected graph
    }

    int result = prim();
    printf("%d\n", result);

    return 0;
>>>>>>> 2f7ab0c (Commit for April 22)
}
