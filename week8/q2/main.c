
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
