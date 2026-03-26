// Problem Statement:
// Find the Lowest Common Ancestor (LCA) of two nodes in a Binary Tree.

// Input Format:
// - First line contains integer N
// - Second line contains level-order traversal (-1 represents NULL)
// - Third line contains two node values

// Output Format:
// - Print the LCA value

// Example:
// Input:
// 7
// 1 2 3 4 5 6 7
// 4 5

// Output:
// 2

#include <stdio.h>
#include <stdlib.h>

// Structure of a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int value) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Function to find LCA
struct Node* findLCA(struct Node* root, int n1, int n2) {
    
    // Base case: if tree is empty
    if (root == NULL)
        return NULL;

    // If current node is one of the nodes
    if (root->data == n1 || root->data == n2)
        return root;

    // Search in left and right subtree
    struct Node* left = findLCA(root->left, n1, n2);
    struct Node* right = findLCA(root->right, n1, n2);

    // If both sides return non-NULL → this is LCA
    if (left != NULL && right != NULL)
        return root;

    // Otherwise return non-NULL side
    if (left != NULL)
        return left;
    else
        return right;
}

// MAIN FUNCTION
int main() {
    
    // Creating tree manually (same as example)
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    int n1 = 4, n2 = 5;

    struct Node* lca = findLCA(root, n1, n2);

    printf("LCA = %d", lca->data);

    return 0;
}