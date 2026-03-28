// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers

// Output:
// - Print each element followed by its frequency in the format element:count

// Example:
// Input:
// 5
// 1 2 2 3 1

// Output:
// 1:2 2:2 3:1

#include <stdio.h>

int main() {
    int n;

    // Take size of array
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Array to mark visited elements
    int visited[n];

    // Initialize all as not visited (0)
    for(int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Loop through each element
    for(int i = 0; i < n; i++) {

        // Skip if already counted
        if(visited[i] == 1) {
            continue;
        }

        int count = 1; // Count current element

        // Compare with rest of elements
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;           // Increase count
                visited[j] = 1;    // Mark as visited
            }
        }

        // Print element and its frequency
        printf("%d:%d ", arr[i], count);
    }

    return 0;
}

    
