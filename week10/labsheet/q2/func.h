#ifndef FUNC_H
#define FUNC_H

#include "types.h"

TreeNode *createNode(int isbn, int copies);
TreeNode *insertBook(TreeNode *root, int isbn, int copies);
void displayAscending(TreeNode *root);
void displayDescending(TreeNode *root);
void displayInsertionOrder(TreeNode *root);
int getTotalBooks(TreeNode *root);
int findCopies(TreeNode *root, int isbn);

#endif
