// Problem: Rotate Linked List Right by k Places - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer k

// Output:
// - Print the linked list elements after rotation, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 40 50 10 20 30

// Explanation:
// Connect last node to head forming circular list. Traverse to (n-k)th node, set next to NULL, update head to (n-k+1)th node.

#include <stdio.h>
#include <stdlib.h>

// node structure
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int n, k, i;

    // input number of nodes
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL, *newNode;

    // create linked list using dynamic memory
    for(i = 0; i < n; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL)
            head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // input rotation value
    scanf("%d", &k);

    // find last node and count
    temp = head;
    int count = 1;
    while(temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }

    // make circular list
    temp->next = head;

    // find new last node
    k = k % count;
    for(i = 0; i < count - k - 1; i++)
        head = head->next;

    // change head and break link
    struct Node *newHead = head->next;
    head->next = NULL;

    // print rotated list
    temp = newHead;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}