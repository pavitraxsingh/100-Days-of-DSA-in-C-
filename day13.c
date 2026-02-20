// Problem: You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.

// Input:
// - First line: two integers r and c representing the number of rows and columns
// - Next r lines: c integers each representing the matrix elements

// Output:
// - Print all visited elements in the order of traversal, separated by spaces

// Example:
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 1 2 3 6 9 8 7 4 5

// Explanation:
// The traversal begins along the top row, proceeds down the rightmost column, then moves across the bottom row in reverse, and finally goes up the leftmost column. The same pattern repeats for the inner submatrix.

// Test Cases:

// Test Case 1:
// Input:
// 2 3
// 1 2 3
// 4 5 6
// Output:
// 1 2 3 6 5 4

// Test Case 2:
// Input:
// 3 1
// 7
// 8
// 9
// Output:
// 7 8 9

#include <stdio.h>

int main() {
    int r, c;

    // Taking number of rows and columns
    scanf("%d %d", &r, &c);

    int arr[r][c];

    // Taking matrix input
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Initialize boundaries
    int top = 0;
    int bottom = r - 1;
    int left = 0;
    int right = c - 1;

    // Continue until all layers are traversed
    while(top <= bottom && left <= right) {

        // 1. Left to Right (Top row)
        for(int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;  // Move top boundary down

        // 2. Top to Bottom (Right column)
        for(int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;  // Move right boundary left

        // 3. Right to Left (Bottom row)
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;  // Move bottom boundary up
        }

        // 4. Bottom to Top (Left column)
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;  // Move left boundary right
        }
    }

    return 0;
}