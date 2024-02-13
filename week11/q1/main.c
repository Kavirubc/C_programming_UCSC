#include <stdio.h>
#include "func.h"

int main()
{
    TreeNode *root = NULL;

    // Insert
    int scores[] = {70, 60, 80, 65, 75, 85, 90, 95};
    for (int i = 0; i < 8; i++)
        root = insert(root, scores[i]);

    printf("Original Tree (In-order Traversal): ");
    inorderTraversal(root);
    printf("\n");

    // Delete
    int deleteScores[] = {85, 65};
    for (int i = 0; i < 2; i++)
    {
        root = deleteNode(root, deleteScores[i]);
        printf("Tree after deleting score %d (In-order Traversal): ", deleteScores[i]);
        inorderTraversal(root);
        printf("\n");
    }

    freeTree(root);

    return 0;
}
