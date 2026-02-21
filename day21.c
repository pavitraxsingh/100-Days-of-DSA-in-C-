// Problem: Create and Traverse Singly Linked List

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

// Creating structure for linked list node
struct node {
    int data;
    struct node* next;
};

int main() {
    int n;
    scanf("%d", &n);

    struct node *head = NULL, *temp = NULL, *newnode = NULL;

    // Creating linked list
    for(int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        // Allocate memory for new node
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL) {
            // First node
            head = newnode;
            temp = newnode;
        } else {
            // Linking new node at the end
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Traversing and printing the linked list
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}