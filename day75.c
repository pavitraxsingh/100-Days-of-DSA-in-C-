
// Problem Statement
// Given an array of integers containing both positive and negative values, find the length of the longest contiguous subarray whose sum is equal to zero.

// Input Format
// An integer array arr[].

// Output Format
// Print the length of the longest subarray with sum equal to zero.

// Sample Input
// 15 -2 2 -8 1 7 10 23

// Sample Output
// 5

// Explanation
// The subarray [-2, 2, -8, 1, 7] has a sum of 0 and is the longest such subarray.

#include <stdio.h>

// Function to find longest subarray with sum = 0
int maxLen(int arr[], int n) {
    int max_length = 0;

    // Prefix sum
    int sum = 0;

    // Create a map (array) to store first occurrence of sum
    // Initialize all values as -1
    int map[1000];
    for (int i = 0; i < 1000; i++) {
        map[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Calculate prefix sum

        // Case 1: If sum becomes 0, subarray from 0 to i
        if (sum == 0) {
            max_length = i + 1;
        }

        // Case 2: If sum is seen before
        // We shift index by +500 to handle negative sums
        if (map[sum + 500] != -1) {
            int length = i - map[sum + 500];
            if (length > max_length) {
                max_length = length;
            }
        } else {
            // Store first occurrence of this sum
            map[sum + 500] = i;
        }
    }

    return max_length;
}

int main() {
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxLen(arr, n);

    printf("Length of longest subarray with sum 0: %d\n", result);

    return 0;
=======
// Problem Statement
// Given an array of integers containing both positive and negative values, find the length of the longest contiguous subarray whose sum is equal to zero.

// Input Format
// An integer array arr[].

// Output Format
// Print the length of the longest subarray with sum equal to zero.

// Sample Input
// 15 -2 2 -8 1 7 10 23

// Sample Output
// 5

// Explanation
// The subarray [-2, 2, -8, 1, 7] has a sum of 0 and is the longest such subarray.

#include <stdio.h>

// Function to find longest subarray with sum = 0
int maxLen(int arr[], int n) {
    int max_length = 0;

    // Prefix sum
    int sum = 0;

    // Create a map (array) to store first occurrence of sum
    // Initialize all values as -1
    int map[1000];
    for (int i = 0; i < 1000; i++) {
        map[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Calculate prefix sum

        // Case 1: If sum becomes 0, subarray from 0 to i
        if (sum == 0) {
            max_length = i + 1;
        }

        // Case 2: If sum is seen before
        // We shift index by +500 to handle negative sums
        if (map[sum + 500] != -1) {
            int length = i - map[sum + 500];
            if (length > max_length) {
                max_length = length;
            }
        } else {
            // Store first occurrence of this sum
            map[sum + 500] = i;
        }
    }

    return max_length;
}

int main() {
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxLen(arr, n);

    printf("Length of longest subarray with sum 0: %d\n", result);

    return 0;
>>>>>>> 2f7ab0c (Commit for April 22)
}
