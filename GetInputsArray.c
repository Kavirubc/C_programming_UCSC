#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *names[5];
    int n = 0;
    int m = 0;

    for (n = 0; n < 5;)
    {
        printf("Eneter name %i: ", (n + 1));
        names[n] = malloc(100); // Allocate memory for each string
        scanf("%s", names[n]);
        n = n + 1;
    }
    for (m = 0; m < 5;)
    {
        printf("%s\n", names[m]);
        m = m + 1;
    }
    return 0;
}