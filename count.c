#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
typedef struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// Function to create a new tree node
TreeNode* createNode(int value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to count the total number of nodes in the binary tree
int countNodes(TreeNode* root) {
    if (root == NULL) {
        return 0; // Base case: If the tree is empty, there are no nodes
    }

    // Recursively count the nodes in the left and right subtrees and add 1 for the current node
    return countNodes(root->left) + countNodes(root->right) + 1;
}

// Main function to demonstrate counting the nodes
int main() {
    // Create a simple binary tree
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Count and print the total number of nodes in the tree
    int totalNodes = countNodes(root);
    printf("Total number of nodes in the binary tree: %d\n", totalNodes);
    
    // Free allocated memory (not shown here for simplicity)
    // Implement proper cleanup in real code

    return 0;
}
