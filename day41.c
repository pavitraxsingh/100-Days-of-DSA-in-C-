<<<<<<< HEAD
// Problem Statement:
// Implement a Queue using a linked list supporting enqueue and dequeue operations.

// Input Format:
// - First line contains integer N
// - Next N lines contain queue operations

// Output Format:
// - Print dequeued elements
// - Print -1 if dequeue is attempted on an empty queue short and easy c program with commenting

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node{
    int data;
    struct node* next;
};

struct node *front = NULL, *rear = NULL;

// Enqueue function
void enqueue(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;

    if(front == NULL){
        front = rear = temp;   // first element
    }else{
        rear->next = temp;     // add at end
        rear = temp;
    }
}

// Dequeue function
int dequeue(){
    if(front == NULL) return -1;  // queue empty

    struct node* temp = front;
    int val = temp->data;

    front = front->next;   // move front
    free(temp);

    if(front == NULL) rear = NULL;

    return val;
}

int main(){
    int n, x;
    char op[10];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",op);

        if(op[0]=='e'){       // enqueue
            scanf("%d",&x);
            enqueue(x);
        }
        else{                 // dequeue
            printf("%d\n",dequeue());
        }
    }
=======
// Problem Statement:
// Implement a Queue using a linked list supporting enqueue and dequeue operations.

// Input Format:
// - First line contains integer N
// - Next N lines contain queue operations

// Output Format:
// - Print dequeued elements
// - Print -1 if dequeue is attempted on an empty queue short and easy c program with commenting

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node{
    int data;
    struct node* next;
};

struct node *front = NULL, *rear = NULL;

// Enqueue function
void enqueue(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;

    if(front == NULL){
        front = rear = temp;   // first element
    }else{
        rear->next = temp;     // add at end
        rear = temp;
    }
}

// Dequeue function
int dequeue(){
    if(front == NULL) return -1;  // queue empty

    struct node* temp = front;
    int val = temp->data;

    front = front->next;   // move front
    free(temp);

    if(front == NULL) rear = NULL;

    return val;
}

int main(){
    int n, x;
    char op[10];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",op);

        if(op[0]=='e'){       // enqueue
            scanf("%d",&x);
            enqueue(x);
        }
        else{                 // dequeue
            printf("%d\n",dequeue());
        }
    }
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}