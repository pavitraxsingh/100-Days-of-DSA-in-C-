
// Problem: Circular Queue Using Array - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of elements to enqueue)
// - Second line: n space-separated integers
// - Third line: integer m (number of dequeue operations)

// Output:
// - Print queue elements from front to rear after operations, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 30 40 50 10 20

// Explanation:
// Use array and front/rear pointers. Rear wraps around to start after reaching array end. Dequeue removes elements from front. Display remaining elements in correct order.

#include <stdio.h>

#define MAX 100

int main()
{
    int queue[MAX];
    int front = 0, rear = -1;
    int n, m, i;

    // read number of elements to enqueue
    scanf("%d", &n);

    // enqueue elements
    for(i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        rear = (rear + 1) % MAX;   // circular increment of rear
        queue[rear] = x;           // insert element
    }

    // number of dequeue operations
    scanf("%d", &m);

    // perform dequeue
    for(i = 0; i < m; i++)
    {
        front = (front + 1) % MAX; // move front forward (remove element)
    }

    // display queue elements from front to rear
    int count = n;
    int index = front;

    for(i = 0; i < count; i++)
    {
        printf("%d ", queue[index]);
        index = (index + 1) % MAX; // circular traversal
    }

    return 0;
=======
// Problem: Circular Queue Using Array - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of elements to enqueue)
// - Second line: n space-separated integers
// - Third line: integer m (number of dequeue operations)

// Output:
// - Print queue elements from front to rear after operations, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 30 40 50 10 20

// Explanation:
// Use array and front/rear pointers. Rear wraps around to start after reaching array end. Dequeue removes elements from front. Display remaining elements in correct order.

#include <stdio.h>

#define MAX 100

int main()
{
    int queue[MAX];
    int front = 0, rear = -1;
    int n, m, i;

    // read number of elements to enqueue
    scanf("%d", &n);

    // enqueue elements
    for(i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        rear = (rear + 1) % MAX;   // circular increment of rear
        queue[rear] = x;           // insert element
    }

    // number of dequeue operations
    scanf("%d", &m);

    // perform dequeue
    for(i = 0; i < m; i++)
    {
        front = (front + 1) % MAX; // move front forward (remove element)
    }

    // display queue elements from front to rear
    int count = n;
    int index = front;

    for(i = 0; i < count; i++)
    {
        printf("%d ", queue[index]);
        index = (index + 1) % MAX; // circular traversal
    }

    return 0;
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}
