// Problem: Given meeting intervals, find minimum number of rooms required.
// Sort by start time and use min-heap on end times.

#include <stdio.h>
#include <stdlib.h>

// Comparator for sorting by start time
int compare(const void *a, const void *b) {
    int *m1 = *(int **)a;
    int *m2 = *(int **)b;
    return m1[0] - m2[0];
}

// Min heap (for end times)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int heap[], int n, int i) {
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && heap[left] < heap[smallest])
        smallest = left;

    if (right < n && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        heapify(heap, n, smallest);
    }
}

// Insert into heap
void insertHeap(int heap[], int *n, int val) {
    heap[*n] = val;
    int i = *n;
    (*n)++;

    while (i != 0 && heap[(i-1)/2] > heap[i]) {
        swap(&heap[i], &heap[(i-1)/2]);
        i = (i-1)/2;
    }
}

// Remove min (root)
void removeMin(int heap[], int *n) {
    heap[0] = heap[*n - 1];
    (*n)--;
    heapify(heap, *n, 0);
}

// Function to find min rooms
int minRooms(int **meetings, int n) {
    qsort(meetings, n, sizeof(meetings[0]), compare);

    int heap[n];   // stores end times
    int size = 0;

    insertHeap(heap, &size, meetings[0][1]);

    for (int i = 1; i < n; i++) {

        // If room free (earliest end <= current start)
        if (heap[0] <= meetings[i][0]) {
            removeMin(heap, &size);
        }

        insertHeap(heap, &size, meetings[i][1]);
    }

    return size;
}

// Main function
int main() {
    int n = 3;

    int **meetings = (int **)malloc(n * sizeof(int *));
    
    int data[3][2] = {{0,30}, {5,10}, {15,20}};

    for (int i = 0; i < n; i++) {
        meetings[i] = (int *)malloc(2 * sizeof(int));
        meetings[i][0] = data[i][0];
        meetings[i][1] = data[i][1];
    }

    printf("Minimum rooms required: %d\n", minRooms(meetings, n));

    return 0;
}
