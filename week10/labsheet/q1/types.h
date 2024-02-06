#ifndef TYPES_H
#define TYPES_H

struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode TreeNode;

#endif