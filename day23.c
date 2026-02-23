// // Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 35 45

// Output:
// 10 15 20 25 30 35 40 45 50

// Explanation:
// Compare nodes of both lists, append smaller to result, continue until all nodes are merged.

#include <stdio.h>
#include <stdlib.h>

// structure of node
struct node {
    int data;
    struct node *next;
};

// function to create linked list
struct node* createList(int n) {
    struct node *head = NULL, *temp = NULL, *newnode;
    int i, value;

    for(i = 0; i < n; i++) {
        scanf("%d", &value);

        // allocate memory for new node
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;   // first node
        } else {
            temp->next = newnode;  // link previous node
        }

        temp = newnode;  // move temp forward
    }
    return head;
}

// function to merge two sorted lists
struct node* merge(struct node* l1, struct node* l2) {
    struct node dummy;   // dummy node to simplify logic
    struct node *tail = &dummy;
    dummy.next = NULL;

    while(l1 != NULL && l2 != NULL) {
        if(l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;  // move tail
    }

    // attach remaining nodes
    if(l1 != NULL)
        tail->next = l1;
    else
        tail->next = l2;

    return dummy.next;
}

int main() {
    int n, m;

    scanf("%d", &n);
    struct node* list1 = createList(n);

    scanf("%d", &m);
    struct node* list2 = createList(m);

    struct node* result = merge(list1, list2);

    // print merged list
    while(result != NULL) {
        printf("%d ", result->data);
        result = result->next;
    }

    return 0;
}