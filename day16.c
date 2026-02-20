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