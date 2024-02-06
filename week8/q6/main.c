#include <stdio.h>

int waysToClimb(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return waysToClimb(n - 1) + waysToClimb(n - 2) + waysToClimb(n - 3);
    }
}

int main()
{
    int n;
    printf("Enter the number of steps in the staircase: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input. Number of steps must be non-negative.\n");
    }
    else
    {
        int ways = waysToClimb(n);
        printf("Total number of ways to climb the staircase: %d\n", ways);
    }

    return 0;
}
