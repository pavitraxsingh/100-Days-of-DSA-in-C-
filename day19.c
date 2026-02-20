// Problem: Given an array of integers, find two elements whose sum is closest to zero.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the pair of elements whose sum is closest to zero

// Example:
// Input:
// 5
// 1 60 -10 70 -80

// Output:
// -10 1

// Explanation: Among all possible pairs, the sum of -10 and 1 is -9, which is the closest to zero compared to other pairs.

#include <stdio.h>
#include <stdlib.h>   

int main() {
    int n;

    // Taking size of array
    scanf("%d", &n);

    int arr[n];

    // Taking array elements as input
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first two elements give minimum sum initially
    int min_sum = abs(arr[0] + arr[1]);
    int num1 = arr[0];
    int num2 = arr[1];

    // Checking all possible pairs using two loops
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {

            int sum = arr[i] + arr[j];   // Finding sum of pair

            // If current pair sum is closer to zero
            if(abs(sum) < min_sum) {
                min_sum = abs(sum);  // Update minimum sum
                num1 = arr[i];       // Store first number
                num2 = arr[j];       // Store second number
            }
        }
    }

    // Printing the pair whose sum is closest to zero
    printf("%d %d", num1, num2);

    return 0;
}