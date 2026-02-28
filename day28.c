// Problem: Circular Linked List Creation and Traversal - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the circular linked list elements starting from head, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Last node's next points to head. Traverse from head until returning to head to avoid infinite loop.
#include <stdio.h>
#include <stdlib.h>

// Structure of Node
struct Node
{
    int data;
    struct Node *next;
};

// Function to create circular linked list
struct Node* createCircularList(int n)
{
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int value;

    if(n <= 0)
        return NULL;

    // Create first node
    scanf("%d", &value);
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = value;
    head->next = head; // point to itself
    temp = head;

    // Create remaining nodes
    for(int i = 2; i <= n; i++)
    {
        scanf("%d", &value);
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = head; // new node points to head

        temp->next = newNode; // previous node points to new node
        temp = newNode;
    }

    return head;
}

// Function to traverse circular linked list
void traverseCircularList(struct Node *head)
{
    if(head == NULL)
        return;

    struct Node *temp = head;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    while(temp != head);
}

// Main function
int main()
{
    int n;
    struct Node *head;

    scanf("%d", &n);

    head = createCircularList(n);

    traverseCircularList(head);

    return 0;
}