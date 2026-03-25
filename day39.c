<<<<<<< HEAD
// Problem Statement:
// Implement a Min Heap using an array where the smallest element is always at the root.

// Supported Operations:
// - insert x
// - extractMin
// - peek

// Input Format:
// - First line contains integer N
// - Next N lines contain heap operations

// Output Format:
// - Print results of extractMin and peek
// - Print -1 if operation cannot be performed

// Example:
// Input:
// 6
// insert 40
// insert 10
// insert 30
// peek
// extractMin
// peek

// Output:
// 10
// 10
// 30
#include <stdio.h>
#include <string.h>

int heap[1000];   // array to store heap elements
int size = 0;     // current number of elements in heap

// function to swap two numbers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// insert element into heap
void insert(int x){
    heap[size] = x;   // place new element at end
    int i = size;
    size++;

    // heapify up (move element to correct position)
    while(i > 0 && heap[(i-1)/2] > heap[i]){
        swap(&heap[(i-1)/2], &heap[i]);
        i = (i-1)/2;  // move to parent
    }
}

// remove and return smallest element
int extractMin(){
    if(size == 0) return -1;  // heap empty

    int min = heap[0];        // root element
    heap[0] = heap[size-1];   // move last element to root
    size--;

    int i = 0;

    // heapify down
    while(2*i + 1 < size){
        int smallest = 2*i + 1; // left child

        // check if right child is smaller
        if(2*i + 2 < size && heap[2*i+2] < heap[smallest])
            smallest = 2*i + 2;

        // if parent is already smallest stop
        if(heap[i] <= heap[smallest])
            break;

        // swap with smaller child
        swap(&heap[i], &heap[smallest]);
        i = smallest;
    }

    return min;
}

// return smallest element without removing
int peek(){
    if(size == 0) return -1;
    return heap[0];
}

int main(){
    int n, x;
    char op[20];

    scanf("%d",&n);  // number of operations

    for(int i=0;i<n;i++){
        scanf("%s",op);

        // insert operation
        if(strcmp(op,"insert")==0){
            scanf("%d",&x);
            insert(x);
        }

        // remove minimum element
        else if(strcmp(op,"extractMin")==0){
            printf("%d\n",extractMin());
        }

        // show minimum element
        else if(strcmp(op,"peek")==0){
            printf("%d\n",peek());
        }
    }
=======
// Problem Statement:
// Implement a Min Heap using an array where the smallest element is always at the root.

// Supported Operations:
// - insert x
// - extractMin
// - peek

// Input Format:
// - First line contains integer N
// - Next N lines contain heap operations

// Output Format:
// - Print results of extractMin and peek
// - Print -1 if operation cannot be performed

// Example:
// Input:
// 6
// insert 40
// insert 10
// insert 30
// peek
// extractMin
// peek

// Output:
// 10
// 10
// 30
#include <stdio.h>
#include <string.h>

int heap[1000];   // array to store heap elements
int size = 0;     // current number of elements in heap

// function to swap two numbers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// insert element into heap
void insert(int x){
    heap[size] = x;   // place new element at end
    int i = size;
    size++;

    // heapify up (move element to correct position)
    while(i > 0 && heap[(i-1)/2] > heap[i]){
        swap(&heap[(i-1)/2], &heap[i]);
        i = (i-1)/2;  // move to parent
    }
}

// remove and return smallest element
int extractMin(){
    if(size == 0) return -1;  // heap empty

    int min = heap[0];        // root element
    heap[0] = heap[size-1];   // move last element to root
    size--;

    int i = 0;

    // heapify down
    while(2*i + 1 < size){
        int smallest = 2*i + 1; // left child

        // check if right child is smaller
        if(2*i + 2 < size && heap[2*i+2] < heap[smallest])
            smallest = 2*i + 2;

        // if parent is already smallest stop
        if(heap[i] <= heap[smallest])
            break;

        // swap with smaller child
        swap(&heap[i], &heap[smallest]);
        i = smallest;
    }

    return min;
}

// return smallest element without removing
int peek(){
    if(size == 0) return -1;
    return heap[0];
}

int main(){
    int n, x;
    char op[20];

    scanf("%d",&n);  // number of operations

    for(int i=0;i<n;i++){
        scanf("%s",op);

        // insert operation
        if(strcmp(op,"insert")==0){
            scanf("%d",&x);
            insert(x);
        }

        // remove minimum element
        else if(strcmp(op,"extractMin")==0){
            printf("%d\n",extractMin());
        }

        // show minimum element
        else if(strcmp(op,"peek")==0){
            printf("%d\n",peek());
        }
    }
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}