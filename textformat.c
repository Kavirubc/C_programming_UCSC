#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, m, l;
    printf("Enter the number of lines: \n");
    scanf("%i", &n);
    char *text[n];
    for (m = 0; m < n;)
    {
        printf("Enter line %i: \n", m+1);
        text[m] = malloc(100);
        scanf("%c", text[m]);
        m = m + 1;
    }
    for (l = 0; l < 5;)
    {
        printf("%c\n", text[l]);
        free(text[l]); // Free the allocated memory
        l = l + 1;
    }
    return 0;
}
