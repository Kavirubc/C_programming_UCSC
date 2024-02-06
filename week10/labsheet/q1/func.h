#ifndef FUNC_H
#define FUNC_H

#include "types.h"

TreeNode *createNode(int data);
TreeNode *insertNode(TreeNode *root, int data);
void inorderTraversal(TreeNode *root);
void preorderTraversal(TreeNode *root);
void postorderTraversal(TreeNode *root);

#endif



