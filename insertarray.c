#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *names[3];
    int n, count,l;

    for (n = 0; n < sizeof(names) / sizeof(names[0]); n++)
    {
        printf("Enter the names of your friends: ");
        names[n] = malloc(100);
        scanf("%s", names[n]);
        count = n;
        if (count >= sizeof(names) / sizeof(names[0]))
        {
            char *names2[count * 2];
            names[3] = names2[count * 2];
            for (count = count; count < count * 2; count++)
            {
                printf("Enter the names of your friends: ");
                names2[count] = malloc(100);
                scanf("%s", names2[count]);
            }
            for (l = 0; l < count;)
            {
                printf("%s\n", names2[l]);
                free(names2[l]); // Free the allocated memory
                l = l + 1;
            }
        }
        else
        {
            printf("%s\n", names[l]);
            free(names[l]); // Free the allocated memory
            l = l + 1;
        }
    }
    return 0;
}
