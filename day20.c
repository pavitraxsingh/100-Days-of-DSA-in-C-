// Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.

// Input:
// - First line: integer n
// - Second line: n integers

// Output:
// - Print the count of subarrays having sum zero

// Example:
// Input:
// 6
// 1 -1 2 -2 3 -3

// Output:
// 6

// Explanation: A subarray is a continuous part of the array. For the input array 1 -1 2 -2 3 -3, the following subarrays have sum zero: [1, -1], [2, -2], [3, -3], [1, -1, 2, -2], [2, -2, 3, -3], and [1, -1, 2, -2, 3, -3]. Since there are 6 such subarrays, the output is 6. easiest possible code

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

    int count = 0;  // To store number of zero-sum subarrays

    // Outer loop for starting index
    for(int i = 0; i < n; i++) {

        int sum = 0;  // Reset sum for every new starting point

        // Inner loop for ending index
        for(int j = i; j < n; j++) {

            sum = sum + arr[j];  // Add elements continuously

            // If sum becomes zero, increase count
            if(sum == 0) {
                count++;
            }
        }
    }

    // Print total zero-sum subarrays
    printf("%d", count);

    return 0;
}