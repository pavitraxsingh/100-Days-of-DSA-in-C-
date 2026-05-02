// Problem: Sort array of non-negative integers using counting sort.
// Find max, build freq array, compute prefix sums, build output.
#include <stdio.h>
#include <stdlib.h>

// Function to find maximum element
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Counting Sort function
void countingSort(int arr[], int n) {
    int max = findMax(arr, n);

    // Step 1: Create frequency array
    int *count = (int *)calloc(max + 1, sizeof(int));

    // Step 2: Store frequency
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Step 3: Prefix sum (cumulative count)
    for (int i = 1; i <= max; i++) {
        count[i] = count[i] + count[i - 1];
    }

    // Step 4: Build output array
    int *output = (int *)malloc(n * sizeof(int));

    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    free(count);
    free(output);
}

// Print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    countingSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
