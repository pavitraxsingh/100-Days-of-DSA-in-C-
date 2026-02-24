// Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer key

// Output:
// - Print the linked list elements after deletion, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// 10 20 40 50

// Explanation:
// Traverse list, find first node with key, remove it by adjusting previous node's next pointer.

#include <stdio.h>
#include <stdlib.h>

// structure of node
struct node {
    int data;
    struct node *next;
};

int main() {
    int n, i, value, key;
    struct node *head = NULL, *temp = NULL, *newnode, *prev;

    scanf("%d", &n);   // number of nodes

    // creating linked list
    for(i = 0; i < n; i++) {
        scanf("%d", &value);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL)
            head = newnode;
        else
            temp->next = newnode;

        temp = newnode;
    }

    scanf("%d", &key);   // key to delete

    temp = head;
    prev = NULL;

    // searching for first occurrence
    while(temp != NULL) {
        if(temp->data == key) {
            if(prev == NULL) {
                head = temp->next;   // if first node
            } else {
                prev->next = temp->next;  // bypass the node
            }
            free(temp);   // free memory
            break;        // delete only first occurrence
        }
        prev = temp;
        temp = temp->next;
    }

    // printing updated list
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}