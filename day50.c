// Problem: BST Search

// Implement the solution for this problem.

// Input:
// - Input specifications

// Output:
// - Output specifications

#include <stdio.h>
#include <stdlib.h>

// Structure for BST node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert node in BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// Function to search key in BST
int search(struct Node* root, int key) {
    // Base case: not found
    if (root == NULL)
        return 0;

    // Key found
    if (root->data == key)
        return 1;

    // Search in left subtree
    if (key < root->data)
        return search(root->left, key);

    // Search in right subtree
    return search(root->right, key);
}

// Main function
int main() {
    struct Node* root = NULL;

    // Creating BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    int key = 40;

    // Search operation
    if (search(root, key))
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}