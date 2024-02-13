#ifndef FUNC_H
#define FUNC_H

#include "types.h"


TreeNode *insert(TreeNode *root, int score);
TreeNode *deleteNode(TreeNode *root, int score);
void inorderTraversal(TreeNode *root);
TreeNode *minValueNode(TreeNode *node);
void freeTree(TreeNode *root);

#endif