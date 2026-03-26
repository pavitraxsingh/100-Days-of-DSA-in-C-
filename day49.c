// Problem: BST Insert

// Implement the solution for this problem.

// Input:
// - Input specifications

// Output:
// - Output specifications

#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert into BST
struct Node* insert(struct Node* root, int value) {
    // If tree is empty, create new node
    if (root == NULL)
        return createNode(value);

    // If value is smaller, go left
    if (value < root->data)
        root->left = insert(root->left, value);
    // If value is greater, go right
    else
        root->right = insert(root->right, value);

    return root;
}

// Inorder traversal (Left -> Root -> Right)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    int n, value, insertValue;
    struct Node* root = NULL;

    // Input number of nodes
    scanf("%d", &n);

    // Input elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }

    // Value to insert
    scanf("%d", &insertValue);
    root = insert(root, insertValue);

    // Output inorder traversal
    inorder(root);

    return 0;
}