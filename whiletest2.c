#include <stdio.h>
#include <stdlib.h>

void loop()
{
    int n, num, sum;
    n = 1;
    sum = 0;
    printf("%d", sum);
    while (n <= 5)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = num + sum;
        n++;
    }
    printf("%d", sum);
}

int main()
{
    loop();
    return 0;
}