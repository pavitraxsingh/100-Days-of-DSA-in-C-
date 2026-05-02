
// Problem: Queue Using Array - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of elements)
// - Second line: n space-separated integers

// Output:
// - Print queue elements from front to rear, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Use array and front/rear pointers. Enqueue inserts at rear, dequeue removes from front. Display from front to rear.

#include <stdio.h>

#define MAX 100   // maximum size of queue

int queue[MAX];
int front = -1, rear = -1;

// function to insert element in queue
void enqueue(int value) {
    if (rear == MAX - 1) {          // check if queue is full
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)                // first element
        front = 0;

    rear++;
    queue[rear] = value;            // insert at rear
}

// function to display queue
void display() {
    int i;
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);    // print from front to rear
    }
}

int main() {
    int n, i, x;

    scanf("%d", &n);                // number of elements

    for (i = 0; i < n; i++) {
        scanf("%d", &x);            // input elements
        enqueue(x);                 // add to queue
    }

    display();                      // print queue

    return 0;
=======
// Problem: Queue Using Array - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of elements)
// - Second line: n space-separated integers

// Output:
// - Print queue elements from front to rear, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Use array and front/rear pointers. Enqueue inserts at rear, dequeue removes from front. Display from front to rear.

#include <stdio.h>

#define MAX 100   // maximum size of queue

int queue[MAX];
int front = -1, rear = -1;

// function to insert element in queue
void enqueue(int value) {
    if (rear == MAX - 1) {          // check if queue is full
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)                // first element
        front = 0;

    rear++;
    queue[rear] = value;            // insert at rear
}

// function to display queue
void display() {
    int i;
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);    // print from front to rear
    }
}

int main() {
    int n, i, x;

    scanf("%d", &n);                // number of elements

    for (i = 0; i < n; i++) {
        scanf("%d", &x);            // input elements
        enqueue(x);                 // add to queue
    }

    display();                      // print queue

    return 0;
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}
