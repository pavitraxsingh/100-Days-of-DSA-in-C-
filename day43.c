
// Problem Statement:
// Construct a Binary Tree from the given level-order traversal.

// Input Format:
// - First line contains integer N
// - Second line contains N space-separated integers (-1 represents NULL)

// Output Format:
// - Print inorder traversal of the constructed tree

// Example:
// Input:
// 7
// 1 2 3 4 5 -1 6

// Output:
// // 4 2 5 1 3 6

#include <stdio.h>
#include <stdlib.h>

// structure of tree node
struct node{
    int data;
    struct node *left,*right;
};

// function to create a new node
struct node* newNode(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;        // store value
    temp->left=NULL;        // initially left child is NULL
    temp->right=NULL;       // initially right child is NULL
    return temp;
}

// inorder traversal (Left -> Root -> Right)
void inorder(struct node* root){
    if(root==NULL)          // if node is NULL, return
        return;

    inorder(root->left);    // visit left subtree
    printf("%d ",root->data); // print root value
    inorder(root->right);   // visit right subtree
}

int main(){
    int n,i;
    scanf("%d",&n);         // number of elements in level order

    int a[n];
    struct node* nodes[n];  // array to store node addresses

    // take input and create nodes
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

        if(a[i]==-1)        // -1 represents NULL node
            nodes[i]=NULL;
        else
            nodes[i]=newNode(a[i]); // create node
    }

    // link nodes according to level order
    for(i=0;i<n;i++){
        if(nodes[i]!=NULL){
            int l=2*i+1;    // index of left child
            int r=2*i+2;    // index of right child

            if(l<n) nodes[i]->left=nodes[l];   // attach left child
            if(r<n) nodes[i]->right=nodes[r];  // attach right child
        }
    }

    inorder(nodes[0]);      // perform inorder traversal from root
>>>>>>> 48e18f8f115626e73738b88e53863d245889f2c6
}
