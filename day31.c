#include <stdio.h>

#define MAX 100   // Maximum size of stack

int stack[MAX];   // Array to store stack elements
int top = -1;     // Initialize top as -1 (stack is empty)

// Function to push element into stack
void push(int x) {
    if(top == MAX - 1) {
        // Stack Overflow condition (not required in question, so just return)
        return;
    }
    stack[++top] = x;  // Increase top and insert element
}

// Function to pop element from stack
void pop() {
    if(top == -1) {
        // Stack is empty
        printf("Stack Underflow\n");
    } else {
        printf("%d\n", stack[top]); // Print top element
        top--;                     // Decrease top
    }
}

// Function to display stack elements (top to bottom)
void display() {
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);   // Print each element
    }
    printf("\n");
}

int main() {
    int n, op, val;

    scanf("%d", &n);   // Number of operations

    while(n--) {
        scanf("%d", &op);  // Read operation type

        if(op == 1) {      // Push operation
            scanf("%d", &val);
            push(val);
        }
        else if(op == 2) { // Pop operation
            pop();
        }
        else if(op == 3) { // Display operation
            display();
        }
    }

    return 0;
}