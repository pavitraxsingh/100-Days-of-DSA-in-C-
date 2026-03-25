<<<<<<< HEAD
// 

#include <stdio.h>

int main() {
    int n;
    
    // Taking size of array
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Loop to count frequency
    for(int i = 0; i < n; i++) {
        
        int count = 1;   // Count current element
        int visited = 0; // To check if already counted
        
        // Check if element was already counted
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                visited = 1;
                break;
            }
        }
        
        if(visited == 1)
            continue;
        
        // Count occurrences
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        
        // Print element and its frequency
        printf("%d:%d ", arr[i], count);
    }
    
    return 0;
}
=======
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
    
    // Taking size of array
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Loop to count frequency
    for(int i = 0; i < n; i++) {
        
        int count = 1;   // Count current element
        int visited = 0; // To check if already counted
        
        // Check if element was already counted
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                visited = 1;
                break;
            }
        }
        
        if(visited == 1)
            continue;
        
        // Count occurrences
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        
        // Print element and its frequency
        printf("%d:%d ", arr[i], count);
    }
    
    return 0;
}
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
