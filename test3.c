#include <stdio.h>
int main()
{
    float num1;
    float num2;
    int tot;
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);
    tot = num1 + num2;
    printf("Sum of two numbers is: %i", tot);
    return 0;
}