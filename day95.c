// Problem: Given n real numbers in [0,1), sort using bucket sort algorithm.
// Distribute into buckets, sort each, concatenate.


#include <stdio.h>
#include <stdlib.h>

#define BUCKET_SIZE 10   // number of buckets

// Insertion sort for each bucket
void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    // Create buckets
    float buckets[BUCKET_SIZE][n];
    int count[BUCKET_SIZE];

    for (int i = 0; i < BUCKET_SIZE; i++)
        count[i] = 0;

    // Distribute elements into buckets
    for (int i = 0; i < n; i++) {
        int index = arr[i] * BUCKET_SIZE;  // bucket index
        buckets[index][count[index]] = arr[i];
        count[index]++;
    }

    // Sort individual buckets
    for (int i = 0; i < BUCKET_SIZE; i++) {
        if (count[i] > 0)
            insertionSort(buckets[i], count[i]);
    }

    // Concatenate buckets back into array
    int k = 0;
    for (int i = 0; i < BUCKET_SIZE; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[k++] = buckets[i][j];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    float arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    bucketSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}