<<<<<<< HEAD
// Problem: Polynomial Using Linked List - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of terms)
// - Next n lines: two integers (coefficient and exponent)

// Output:
// - Print polynomial in standard form, e.g., 10x^4 + 20x^3 + 30x^2 + 40x + 50

// Example:
// Input:
// 5
// 10 4
// 20 3
// 30 2
// 40 1
// 50 0

// Output:
// 10x^4 + 20x^3 + 30x^2 + 40x + 50

// Explanation:
// Each node stores coefficient and exponent. Traverse nodes to print polynomial in decreasing exponent order

#include <stdio.h>
#include <stdlib.h>

// Structure to represent each term of polynomial
struct Node {
    int coeff;              // Coefficient of term
    int exp;                // Exponent of term
    struct Node* next;      // Pointer to next node
};

// Function to insert a new term at the end
void insert(struct Node** head, int c, int e) {

    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Assign values
    newNode->coeff = c;
    newNode->exp = e;
    newNode->next = NULL;

    // If list is empty, make new node as head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Otherwise traverse to last node
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link last node to new node
    temp->next = newNode;
}

// Function to display polynomial in proper format
void display(struct Node* head) {

    struct Node* temp = head;

    // Traverse entire list
    while (temp != NULL) {

        // If exponent is 0 → print only coefficient
        if (temp->exp == 0)
            printf("%d", temp->coeff);

        // If exponent is 1 → print coeffx
        else if (temp->exp == 1)
            printf("%dx", temp->coeff);

        // Otherwise → print coeffx^exp
        else
            printf("%dx^%d", temp->coeff, temp->exp);

        // Print + only if next term exists
        if (temp->next != NULL)
            printf(" + ");

        temp = temp->next;   // Move to next node
    }
}

// Main function
int main() {

    int n, c, e;
    struct Node* head = NULL;   // Initialize head as NULL

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Input coefficient and exponent for each term
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent: ");
        scanf("%d %d", &c, &e);
        insert(&head, c, e);   // Insert term into linked list
    }

    printf("Polynomial: ");
    display(head);   // Display polynomial

    return 0;
=======
// Problem: Polynomial Using Linked List - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of terms)
// - Next n lines: two integers (coefficient and exponent)

// Output:
// - Print polynomial in standard form, e.g., 10x^4 + 20x^3 + 30x^2 + 40x + 50

// Example:
// Input:
// 5
// 10 4
// 20 3
// 30 2
// 40 1
// 50 0

// Output:
// 10x^4 + 20x^3 + 30x^2 + 40x + 50

// Explanation:
// Each node stores coefficient and exponent. Traverse nodes to print polynomial in decreasing exponent order

#include <stdio.h>
#include <stdlib.h>

// Structure to represent each term of polynomial
struct Node {
    int coeff;              // Coefficient of term
    int exp;                // Exponent of term
    struct Node* next;      // Pointer to next node
};

// Function to insert a new term at the end
void insert(struct Node** head, int c, int e) {

    // Allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Assign values
    newNode->coeff = c;
    newNode->exp = e;
    newNode->next = NULL;

    // If list is empty, make new node as head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Otherwise traverse to last node
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link last node to new node
    temp->next = newNode;
}

// Function to display polynomial in proper format
void display(struct Node* head) {

    struct Node* temp = head;

    // Traverse entire list
    while (temp != NULL) {

        // If exponent is 0 → print only coefficient
        if (temp->exp == 0)
            printf("%d", temp->coeff);

        // If exponent is 1 → print coeffx
        else if (temp->exp == 1)
            printf("%dx", temp->coeff);

        // Otherwise → print coeffx^exp
        else
            printf("%dx^%d", temp->coeff, temp->exp);

        // Print + only if next term exists
        if (temp->next != NULL)
            printf(" + ");

        temp = temp->next;   // Move to next node
    }
}

// Main function
int main() {

    int n, c, e;
    struct Node* head = NULL;   // Initialize head as NULL

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Input coefficient and exponent for each term
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent: ");
        scanf("%d %d", &c, &e);
        insert(&head, c, e);   // Insert term into linked list
    }

    printf("Polynomial: ");
    display(head);   // Display polynomial

    return 0;
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}