// Problem Statement:
// Construct a binary tree from given preorder and inorder traversal arrays.

// Input Format:
// - First line contains integer N
// - Second line contains preorder traversal
// - Third line contains inorder traversal

// Output Format:
// - Print postorder traversal of constructed tree

// Example:
// Input:
// 5
// 1 2 4 5 3
// 4 2 5 1 3

// Output:
// 4 5 2 3 1

// Explanation:
// Preorder identifies root, inorder splits left and right subtrees

#include <stdio.h>
#include <stdlib.h>

// Tree Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Global variable to track preorder index
int preIndex = 0;

// Function to find index of value in inorder array
int search(int inorder[], int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == value)
            return i;
    }
    return -1;
}

// Function to build tree
struct Node* buildTree(int preorder[], int inorder[], int start, int end) {
    if (start > end)
        return NULL;

    // Step 1: Pick current node from preorder
    int curr = preorder[preIndex++];
    struct Node* node = newNode(curr);

    // If this node has no children
    if (start == end)
        return node;

    // Step 2: Find this node in inorder
    int inIndex = search(inorder, start, end, curr);

    // Step 3: Build left and right subtree
    node->left = buildTree(preorder, inorder, start, inIndex - 1);
    node->right = buildTree(preorder, inorder, inIndex + 1, end);

    return node;
}

// Function to print postorder traversal
void postorder(struct Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);   // Left
    postorder(root->right);  // Right
    printf("%d ", root->data); // Root
}

int main() {
    int n;
    scanf("%d", &n);

    int preorder[n], inorder[n];

    // Input preorder
    for (int i = 0; i < n; i++) {
        scanf("%d", &preorder[i]);
    }

    // Input inorder
    for (int i = 0; i < n; i++) {
        scanf("%d", &inorder[i]);
    }

    // Build tree
    struct Node* root = buildTree(preorder, inorder, 0, n - 1);

    // Print postorder
    postorder(root);

    return 0;
}