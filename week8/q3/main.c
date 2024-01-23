#include <stdio.h>

int findPower(int base, int power)
{

    if (power == 0)
    {
        return 1;
    }
    else if (power == 1)
    {
        return base;
    }
    return base * findPower(base, power - 1);
}

int main()
{

    int base, power;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);

    printf("Ans is : %d\n", findPower(base, power));
}