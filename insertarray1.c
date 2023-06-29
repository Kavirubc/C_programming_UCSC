#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char **names = malloc(3 * sizeof(char *));
    int capacity = 3; // Initial capacity of the array
    int n, l;

    if (names == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    for (n = 0;; n++)
    {
        if (n >= capacity)
        {
            capacity *= 2; // Double the capacity
            char **temp = realloc(names, capacity * sizeof(char *));
            if (temp == NULL)
            {
                printf("Memory reallocation failed.");
                break;
            }
            names = temp;
        }

        printf("Enter the name of your friend (or 'quit' to exit): ");
        names[n] = malloc(100);
        scanf("%s", names[n]);

        if (strcmp(names[n], "quit") == 0)
        {
            free(names[n]);
            break;
        }
    }

    for (l = 0; l < n; l++)
    {
        printf("%s\n", names[l]);
        free(names[l]); // Free the allocated memory
    }

    free(names); // Free the array of pointers

    return 0;
}
