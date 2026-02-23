// Problem: Count Nodes in Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

#include <stdio.h>
#include <stdlib.h>

// structure for linked list node
struct node {
    int data;
    struct node *next;
};

int main() {
    int n, i, value;
    struct node *head = NULL, *temp, *newnode;

    scanf("%d", &n);   // taking number of nodes

    for(i = 0; i < n; i++) {
        scanf("%d", &value);   // taking data

        // creating new node
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        // if first node
        if(head == NULL) {
            head = newnode;
        }
        else {
            temp->next = newnode;   // linking previous node to new node
        }

        temp = newnode;   // moving temp to new node
    }

    // printing linked list
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}