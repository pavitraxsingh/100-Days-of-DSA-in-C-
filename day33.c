<<<<<<< HEAD
#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

int precedence(char op)
{
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int main()
{
    char infix[100], postfix[100];
    int i, j = 0;

    printf("Enter expression: ");
    scanf("%s", infix);

    for(i = 0; infix[i] != '\0'; i++)
    {
        if(isalnum(infix[i]))   // if operand

// Problem: Convert an infix expression to postfix notation using stack.

// Input:
// - Single line: infix expression (operands are single characters)

// Output:
// - Print the postfix expression

// Example:
// Input:
// A+B*C

// Output:
// ABC*+

// Explanation:
// Operator precedence: * > +
// Use stack to handle operator precedence and associativity

#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

int precedence(char op)
{
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int main()
{
    char infix[100], postfix[100];
    int i, j = 0;

    printf("Enter expression: ");
    scanf("%s", infix);

    for(i = 0; infix[i] != '\0'; i++)
    {
        if(isalnum(infix[i]))   // if operand
        {
            postfix[j++] = infix[i];
        }
        else if(infix[i] == '(')
        {
            stack[++top] = '(';
        }
        else if(infix[i] == ')')
        {
            while(stack[top] != '(')
                postfix[j++] = stack[top--];
            top--;  // remove '('
        }
        else   // if operator
        {
            while(top != -1 && precedence(stack[top]) >= precedence(infix[i]))
                postfix[j++] = stack[top--];
            stack[++top] = infix[i];
        }
    }

    while(top != -1)   // pop remaining operators
        postfix[j++] = stack[top--];

    postfix[j] = '\0';

    printf("Postfix: %s", postfix);
    return 0;

}
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
