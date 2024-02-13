#include <stdio.h>
#include "types.h"
#include "func.h"

int main()
{
    TreeNode *root = NULL;

    // Inserting books into the inventory
    root = insertBook(root, 83847382, 5);
    root = insertBook(root, 23456789, 3);
    root = insertBook(root, 34567890, 8);
    root = insertBook(root, 45678901, 2);

    printf("Report of ISBNs sorted in ascending order:\n");
    displayAscending(root);

    printf("\nReport of ISBNs in the order they were inserted:\n");
    displayInsertionOrder(root);

    printf("\nReport of ISBNs sorted in descending order:\n");
    displayDescending(root);

    printf("\nTotal number of books in the inventory: %d\n", getTotalBooks(root));

    int searchIsbn = 23456789;
    int copies = findCopies(root, searchIsbn);
    if (copies != -1)
    {
        printf("\nISBN %d is present, and there are %d copies available.\n", searchIsbn, copies);
    }
    else
    {
        printf("\nISBN %d is not found in the inventory.\n", searchIsbn);
    }

    return 0;
}
