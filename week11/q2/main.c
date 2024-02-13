#include <stdio.h>
#include "func.h"

int main()
{
    TreeNode *root = NULL;

    // Inserting nodes
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 2);
    root = insert(root, 7);
    root = insert(root, 15);
    root = insert(root, 12);
    root = insert(root, 20);

    printf("Original Tree (In-order Traversal): ");
    inorderTraversal(root);
    printf("\n");

    // Deleting score 12
    root = deleteNode(root, 12);
    printf("Tree after deleting node with value 12 (In-order Traversal): ");
    inorderTraversal(root);
    printf("\n");

    // Deleting score 5
    root = deleteNode(root, 5);
    printf("Tree after deleting node with value 5 (In-order Traversal): ");
    inorderTraversal(root);
    printf("\n");

    freeTree(root);

    return 0;
}
