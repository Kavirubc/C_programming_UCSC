#include <stdio.h>

int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
        for (int i = 0; i < x; i++)
        {
            printf("%d", factorial(x - 1));
        }

    // return x * factorial(x - 1);
}

int main()
{
    printf(" %d\n ", factorial(5));
}