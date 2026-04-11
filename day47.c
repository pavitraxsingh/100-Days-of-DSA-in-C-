
// Problem: Height of Binary Tree

// Implement the solution for this problem.

// Input:
// - Input specifications

// Output:
// // - Output specifications

#include <stdio.h>
#include <stdlib.h>

// Structure of a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Function to find height of binary tree
int height(struct Node* root) {
    // Base case: if tree is empty
    if (root == NULL)
        return 0;

    // Find height of left subtree
    int leftHeight = height(root->left);

    // Find height of right subtree
    int rightHeight = height(root->right);

    // Return max of both + 1 (for current node)
    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}

// Main function
int main() {
    // Creating tree manually
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Print height
    printf("Height of tree = %d", height(root));

    return 0;
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}
