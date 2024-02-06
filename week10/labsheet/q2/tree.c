#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "func.h"

TreeNode *createNode(int isbn, int copies)
{
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    if (newNode != NULL)
    {
        newNode->isbn = isbn;
        newNode->copies = copies;
        newNode->left = newNode->right = NULL;
    }
    return newNode;
}

TreeNode *insertBook(TreeNode *root, int isbn, int copies)
{
    if (root == NULL)
    {
        return createNode(isbn, copies);
    }

    if (isbn < root->isbn)
    {
        root->left = insertBook(root->left, isbn, copies);
    }
    else if (isbn > root->isbn)
    {
        root->right = insertBook(root->right, isbn, copies);
    }

    return root;
}

void displayAscending(TreeNode *root)
{
    if (root != NULL)
    {
        displayAscending(root->left);
        printf("ISBN: %d, Copies: %d\n", root->isbn, root->copies);
        displayAscending(root->right);
    }
}

void displayDescending(TreeNode *root)
{
    if (root != NULL)
    {
        displayDescending(root->right);
        printf("ISBN: %d, Copies: %d\n", root->isbn, root->copies);
        displayDescending(root->left);
    }
}

void displayInsertionOrder(TreeNode *root)
{
    if (root != NULL)
    {
        printf("ISBN: %d, Copies: %d\n", root->isbn, root->copies);
        displayInsertionOrder(root->left);
        displayInsertionOrder(root->right);
    }
}

int getTotalBooks(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + getTotalBooks(root->left) + getTotalBooks(root->right);
}

int findCopies(TreeNode *root, int isbn)
{
    if (root == NULL)
    {
        return -1; // Book not found
    }

    if (isbn == root->isbn)
    {
        return root->copies;
    }
    else if (isbn < root->isbn)
    {
        return findCopies(root->left, isbn);
    }
    else
    {
        return findCopies(root->right, isbn);
    }
}
