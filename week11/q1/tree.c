#include <stdio.h>
#include <stdlib.h>
#include "func.h"

// New Node
TreeNode *insert(TreeNode *root, int score)
{
    if (root == NULL)
    {
        TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
        newNode->score = score;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (score < root->score)
        root->left = insert(root->left, score);
    else if (score > root->score)
        root->right = insert(root->right, score);

    return root;
}

// Find minimum score value
TreeNode *minValueNode(TreeNode *node)
{
    TreeNode *current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// Delete
TreeNode *deleteNode(TreeNode *root, int score)
{
    if (root == NULL)
        return root;
    if (score < root->score)
        root->left = deleteNode(root->left, score);
    else if (score > root->score)
        root->right = deleteNode(root->right, score);
    else
    {
        if (root->left == NULL)
        {
            TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            TreeNode *temp = root->left;
            free(root);
            return temp;
        }
        TreeNode *temp = minValueNode(root->right);
        root->score = temp->score;
        root->right = deleteNode(root->right, temp->score);
    }
    return root;
}

// InorderBST
void inorderTraversal(TreeNode *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->score);
        inorderTraversal(root->right);
    }
}

// Free
void freeTree(TreeNode *root)
{
    if (root != NULL)
    {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}
