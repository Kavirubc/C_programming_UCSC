#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int ol = 1;

    // Input the number of lines
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // Create a 2D array to store the lines of text
    char alls[n][50];

    // Read the input text and store it in the array
    for (int i = 0; i < n; i++)
    {
        printf("Enter line %d: ", i + 1);
        scanf("%s", alls[i]);
    }

    // Process each line of text
    for (int i = 0; i < n; i++)
    {
        // Check for heading level 1
        if (strcmp(alls[i], "h1") == 0)
        {
            printf("//");
            // Print the top border
            for (int j = 0; j < strlen(alls[i + 1]) + 2; j++)
            {
                printf("=");
            }
            printf("\\\\\n");
            // Print the heading text
            printf("|| %s ||\n", alls[i + 1]);
            // Print the bottom border
            printf("\\\\");
            for (int j = 0; j < strlen(alls[i + 1]) + 2; j++)
            {
                printf("=");
            }
            printf("//\n");
        }

        // Add other conditional statements here for different formatting options...
    }

    return 0;
}
