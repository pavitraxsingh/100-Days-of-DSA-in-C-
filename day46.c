
// Problem: Level Order Traversal

// Implement the solution for this problem.

// Input:
// - Input specifications

// Output:
// - Output specifications

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create node
struct Node* newNode(int data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = n->right = NULL;
    return n;
}

// Find height of tree
int height(struct Node* root) {
    if (root == NULL) return 0;

    int l = height(root->left);
    int r = height(root->right);

    return (l > r ? l : r) + 1;
}

// Print nodes at given level
void printLevel(struct Node* root, int level) {
    if (root == NULL) return;

    if (level == 1)
        printf("%d ", root->data);
    else {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}

// Level Order Traversal
void levelOrder(struct Node* root) {
    int h = height(root);

    for (int i = 1; i <= h; i++) {
        printLevel(root, i);
    }
}

// Main
int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    levelOrder(root);

    return 0;
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}
