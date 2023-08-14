#include <stdio.h>
int main()
{
    int i, j, n1, n2, flag = 0;
    printf("Enter lower value for the range: ");
    scanf("%d", &n1);
    printf("Enter upper value for the range: ");
    scanf("%d", &n2);
    printf("Prime numbers between %d and %d are:\n", n1, n2);
    for (i = n1 + 1; i < n2; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d \n", i);
    }
    return 0;
}