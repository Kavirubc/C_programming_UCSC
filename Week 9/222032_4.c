#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int isStrong(int n)
{
    int sum = 0, temp = n;
    while (temp)
    {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int start, end;
    printf("Enter the start of the interval: ");
    scanf("%d ", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);
    printf("The strong numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++)
    {
        if (isStrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
