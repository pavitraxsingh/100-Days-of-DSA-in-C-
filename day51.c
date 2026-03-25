<<<<<<< HEAD
// Find the Lowest Common Ancestor (LCA) of two nodes in a Binary Search Tree.

// Input Format:
// - First line contains integer N
// - Second line contains N space-separated integers
// - Third line contains two node values

// Output Format:
// - Print the LCA value

// Example:
// Input:
// 7
// 6 2 8 0 4 7 9
// 2 8

// Output:
// 6

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int root = arr[0]; // first element is root

    // Find LCA by checking root conditions
    while (1) {
        if (n1 < root && n2 < root) {
            // move left → find next smaller element
            for (i = 0; i < n; i++) {
                if (arr[i] < root) {
                    root = arr[i];
                    break;
                }
            }
        }
        else if (n1 > root && n2 > root) {
            // move right → find next greater element
            for (i = 0; i < n; i++) {
                if (arr[i] > root) {
                    root = arr[i];
                    break;
                }
            }
        }
        else {
            // split point → LCA found
            printf("%d", root);
            break;
        }
    }

    return 0;
=======
// Find the Lowest Common Ancestor (LCA) of two nodes in a Binary Search Tree.

// Input Format:
// - First line contains integer N
// - Second line contains N space-separated integers
// - Third line contains two node values

// Output Format:
// - Print the LCA value

// Example:
// Input:
// 7
// 6 2 8 0 4 7 9
// 2 8

// Output:
// 6

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int root = arr[0]; // first element is root

    // Find LCA by checking root conditions
    while (1) {
        if (n1 < root && n2 < root) {
            // move left → find next smaller element
            for (i = 0; i < n; i++) {
                if (arr[i] < root) {
                    root = arr[i];
                    break;
                }
            }
        }
        else if (n1 > root && n2 > root) {
            // move right → find next greater element
            for (i = 0; i < n; i++) {
                if (arr[i] > root) {
                    root = arr[i];
                    break;
                }
            }
        }
        else {
            // split point → LCA found
            printf("%d", root);
            break;
        }
    }

    return 0;
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}