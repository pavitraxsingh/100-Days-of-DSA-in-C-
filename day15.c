// Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

// Input:
// - First line: two integers m and n
// - Next m lines: n integers each

// Output:
// - Print the sum of the primary diagonal elements

// Example:
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 15

// Explanation:
// 1 + 5 + 9 = 15

#include <stdio.h>

int main() {
    int m, n;
    
    // Taking number of rows and columns
    scanf("%d %d", &m, &n);
    
    int arr[m][n];
    
    // Taking matrix input
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int sum = 0;
    
    // Adding primary diagonal elements
    for(int i = 0; i < m && i < n; i++) {
        sum = sum + arr[i][i];
    }
    
    // Printing the sum
    printf("%d", sum);
    
    return 0;
}