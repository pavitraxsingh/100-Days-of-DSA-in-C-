<<<<<<< HEAD
// Implement Heap Sort using a Max Heap to sort an array in ascending order. First build a max heap, then repeatedly extract the maximum element and place it at the end of the array.
#include <stdio.h>

// Function to heapify a subtree
void heapify(int a[], int n, int i)
{
    int largest = i;          // assume root is largest
    int l = 2*i + 1;          // left child
    int r = 2*i + 2;          // right child
    int temp;

    // check left child
    if(l < n && a[l] > a[largest])
        largest = l;

    // check right child
    if(r < n && a[r] > a[largest])
        largest = r;

    // if largest is not root
    if(largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest); // heapify affected subtree
    }
}

// Heap Sort function
void heapSort(int a[], int n)
{
    int i, temp;

    // build max heap
    for(i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // extract elements from heap
    for(i = n-1; i > 0; i--)
    {
        temp = a[0];       // swap root with last
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);  // heapify reduced heap
    }
}

int main()
{
    int a[] = {4, 10, 3, 5, 1};
    int n = 5, i;

    heapSort(a, n);

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
=======
// Implement Heap Sort using a Max Heap to sort an array in ascending order. First build a max heap, then repeatedly extract the maximum element and place it at the end of the array.
#include <stdio.h>

// Function to heapify a subtree
void heapify(int a[], int n, int i)
{
    int largest = i;          // assume root is largest
    int l = 2*i + 1;          // left child
    int r = 2*i + 2;          // right child
    int temp;

    // check left child
    if(l < n && a[l] > a[largest])
        largest = l;

    // check right child
    if(r < n && a[r] > a[largest])
        largest = r;

    // if largest is not root
    if(largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest); // heapify affected subtree
    }
}

// Heap Sort function
void heapSort(int a[], int n)
{
    int i, temp;

    // build max heap
    for(i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // extract elements from heap
    for(i = n-1; i > 0; i--)
    {
        temp = a[0];       // swap root with last
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);  // heapify reduced heap
    }
}

int main()
{
    int a[] = {4, 10, 3, 5, 1};
    int n = 5, i;

    heapSort(a, n);

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}