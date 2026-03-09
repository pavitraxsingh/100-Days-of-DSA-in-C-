// Problem Statement:
// Implement a Priority Queue using an array. An element with smaller value has higher priority.

// Supported Operations:
// - insert x
// - delete
// - peek

// Input Format:
// - First line contains integer N
// - Next N lines contain operations

// Output Format:
// - Print the deleted or peeked element
// - Print -1 if the queue is empty

// Example:
// Input:
// 5
// insert 30
// insert 10
// insert 20
// delete
// peek

// Output:
// 10
// 20 

#include <stdio.h>
#include <string.h>

int pq[100];   // array for priority queue
int size = 0;  // current number of elements

// function to insert element
void insert(int x) {
    pq[size] = x;   // add element at end
    size++;
}

// function to find index of smallest element
int findMinIndex() {
    if(size == 0)
        return -1;

    int min = 0;
    for(int i = 1; i < size; i++) {
        if(pq[i] < pq[min])   // smaller value = higher priority
            min = i;
    }
    return min;
}

// delete highest priority element
void delete() {
    int index = findMinIndex();

    if(index == -1) {
        printf("-1\n");
        return;
    }

    printf("%d\n", pq[index]);  // print deleted element

    // shift elements left
    for(int i = index; i < size-1; i++) {
        pq[i] = pq[i+1];
    }

    size--;
}

// peek highest priority element
void peek() {
    int index = findMinIndex();

    if(index == -1)
        printf("-1\n");
    else
        printf("%d\n", pq[index]);
}

int main() {
    int n, x;
    char op[10];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s", op);

        if(strcmp(op, "insert") == 0) {
            scanf("%d", &x);
            insert(x);
        }
        else if(strcmp(op, "delete") == 0) {
            delete();
        }
        else if(strcmp(op, "peek") == 0) {
            peek();
        }
    }

    return 0;
}