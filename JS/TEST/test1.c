//create a array and insert function and print function
//insert function

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insert(char **names, int *capacity, int *n)
{
    if (*n >= *capacity)
    {
        *capacity *= 2; // Double the capacity
        char **temp = realloc(names, *capacity * sizeof(char *));
        if (temp == NULL)
        {
            printf("Memory reallocation failed.");
            return;
        }
        names = temp;
    }

    printf("Enter the name of your friend (or 'quit' to exit): ");
    names[*n] = malloc(100);
    scanf("%s", names[*n]);

    if (strcmp(names[*n], "quit") == 0)
    {
        free(names[*n]);
        return;
    }
    *n = *n + 1;
}
