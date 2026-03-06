// Problem: Evaluate Postfix Expression - Implement using linked list with dynamic memory allocation.

// Input:
// - Postfix expression with operands and operators

// Output:
// - Print the integer result

// Example:
// Input:
// 2 3 1 * + 9 -

// Output:
// -4

// Explanation:
// Use stack to store operands, apply operators by popping operands, push result back. Final stack top is result.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// Push into stack
void push(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

// Pop from stack
int pop()
{
    if(top == NULL)
        return -1;

    struct Node* temp = top;
    int val = temp->data;
    top = top->next;
    free(temp);

    return val;
}

int main()
{
    char exp[100];
    int i = 0;

    printf("Enter Postfix Expression: ");
    fgets(exp, sizeof(exp), stdin);

    while(exp[i] != '\0')
    {
        // If operand
        if(isdigit(exp[i]))
        {
            push(exp[i] - '0'); // convert char to int
        }
        // If operator
        else if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            int b = pop();
            int a = pop();
            int result;

            if(exp[i] == '+') result = a + b;
            else if(exp[i] == '-') result = a - b;
            else if(exp[i] == '*') result = a * b;
            else result = a / b;

            push(result);
        }

        i++;
    }

    printf("Result = %d", pop());

    return 0;
}