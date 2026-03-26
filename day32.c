#include <stdio.h>

#define MAX 100   // Maximum size of stack

int stack[MAX];
int top = -1;     // Stack initially empty

int main() {
    int n, m, i, value;

    scanf("%d", &n);   // Number of elements to push

    // Push n elements into stack
    for(i = 0; i < n; i++) {
        scanf("%d", &value);
        stack[++top] = value;   // Push operation
    }

    scanf("%d", &m);   // Number of elements to pop

    // Pop m elements from stack
    for(i = 0; i < m; i++) {
        if(top == -1)  // If stack becomes empty
            break;
        top--;         // Pop operation
    }

    // Display remaining elements from top to bottom
    for(i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    return 0;
}