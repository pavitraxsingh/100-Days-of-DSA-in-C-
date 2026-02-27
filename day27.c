// Problem: Find Intersection Point of Two Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print value of intersection node or 'No Intersection'

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 30 40 50

// Output:
// 30

// Explanation:
// Calculate lengths, advance pointer in longer list, traverse both simultaneously. First common node is intersection.

#include <stdio.h>
#include <stdlib.h>

// structure of linked list node
struct Node {
    int data;           // store value
    struct Node* next;  // pointer to next node
};

// function to create linked list using dynamic memory
struct Node* create(int n) {
    struct Node *head=NULL, *temp, *newnode;
    int x;

    for(int i=0;i<n;i++) {
        scanf("%d",&x);   // take input

        // allocate memory for new node
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=x;
        newnode->next=NULL;

        // if first node then make it head
        if(head==NULL)
            head=temp=newnode;
        else {
            temp->next=newnode;  // connect previous node
            temp=newnode;        // move temp forward
        }
    }
    return head;
}

// function to find length of linked list
int length(struct Node* head) {
    int count=0;
    while(head!=NULL) {
        count++;            // increase count
        head=head->next;    // move to next node
    }
    return count;
}

// function to find intersection point
int intersection(struct Node* h1, struct Node* h2) {

    int l1=length(h1);   // length of first list
    int l2=length(h2);   // length of second list

    int diff=abs(l1-l2); // find difference

    // move pointer of longer list
    if(l1>l2)
        while(diff--)
            h1=h1->next;
    else
        while(diff--)
            h2=h2->next;

    // compare both lists
    while(h1!=NULL && h2!=NULL) {

        // if data same then intersection found
        if(h1->data==h2->data)
            return h1->data;

        h1=h1->next;
        h2=h2->next;
    }

    // if no intersection
    return -1;
}

int main() {

    int n,m;

    scanf("%d",&n);          // input size of first list
    struct Node* h1=create(n);

    scanf("%d",&m);          // input size of second list
    struct Node* h2=create(m);

    int ans=intersection(h1,h2);  // call function

    // print result
    if(ans==-1)
        printf("No Intersection");
    else
        printf("%d",ans);

    return 0;
}