#include <stdio.h>
#include <string.h>
int main()
{
    int m;
    printf("Size of the array plz: ");
    scanf("%i",&m);
    char *numbers[m];
    int n = 0;
    numbers[0] = "10";
    numbers[1] = "20";
    numbers[2] = "30";
    numbers[3] = "40";
    numbers[4] = "50";
    numbers[5] = "60";
    for (n = 0; n < m; n = n + 1)
    {
        printf("%s\n", numbers[n]);
    }
    return 0;
}
