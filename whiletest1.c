#include <stdio.h>
#include <stdlib.h>

void loop(int n, int num, int sum)
{
    while (n > 0)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = sum + num;
        n--;
    }
    printf("%d", sum);
}

int main()
{
    int n = 5, num, sum = 0;
    loop(n, num, sum);
    return 0;
}