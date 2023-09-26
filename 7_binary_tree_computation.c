#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new binary tree node
struct Node *newNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to compute the height of a binary tree
int height(struct Node *root)
{
    if (root == NULL)
    {
        return 0; // Height of an empty tree is 0
    }
    else
    {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
    }
}
// Function to compute the number of internal nodes in a binary tree
int countInternalNodes(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    else
    {
        int leftInternalNodes = countInternalNodes(root->left);
        int rightInternalNodes = countInternalNodes(root->right);
        return leftInternalNodes + rightInternalNodes + 1;
    }
}

// Function to compute the number of external nodes in a binary tree
int countExternalNodes(struct Node *root)
{
    if (root == NULL)
    {
        return 0; // An empty tree has no external nodes
    }
    else if (root->left == NULL && root->right == NULL)
    {
        return 1; // A leaf node is an external node
    }
    else
    {
        int leftExternalNodes = countExternalNodes(root->left);
        int rightExternalNodes = countExternalNodes(root->right);
        return leftExternalNodes + rightExternalNodes;
    }
}

int main()
{
    // Create a sample binary tree
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Print height of the binary tree
    int treeHeight = height(root);
    printf("Height of the binary tree is: %d\n", treeHeight);
    // Compute and print the number of internal nodes in the binary tree
    int internalNodesCount = countInternalNodes(root);
    printf("Number of internal nodes in the binary tree is: %d\n", internalNodesCount);
    // Compute and print the number of external nodes in the binary tree
    int externalNodesCount = countExternalNodes(root);
    printf("Number of external nodes (leaf nodes) in the binary tree is: %d\n", externalNodesCount);
    return 0;
}
