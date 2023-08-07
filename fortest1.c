#include <stdio.h>
#include <stdlib.h>

void loop()
{
    int num = 0, sum = 0;
    for (int n = 0; n < 5; n++)
    {
        printf("Enter the number %d: ", n + 1);
        scanf("%d", &num);
        sum = num + sum;
    }
    printf("%d", sum);
}

int main()
{
    loop();
    return 0;
}