// Problem: Given an array of integers, rotate the array to the right by k positions.

// Input:
// - First line: integer n
// - Second line: n integers
// - Third line: integer k

// Output:
// - Print the rotated array

// Example:
// Input:
// 5
// 1 2 3 4 5
// 2

// Output:
// 4 5 1 2 3

#include <stdio.h>

int main() {
    int n, k;
    
    scanf("%d", &n);
    int arr[n];
    
    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    // Rotating  k times
    for(int i = 0; i < k; i++) {
        int last = arr[n-1];   // store last element
        
        // shifting  all elements to the right
        for(int j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        
        arr[0] = last;   // putting last element at first
    }
    
    // Print result
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
