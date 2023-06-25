#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Defining variable

    float num1, num2, cal;
    char op;

    // Getting inputs and assigning them
    printf("Enter the operator: ");
    scanf("%c", &op);
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculations

    if (op == '/')
    {
        cal = num1 / num2;
        printf("%f", cal);
    }
    else if (op == '*')
    {
        cal = num1 * num2;
        printf("%f", cal);
    }
    else if (op == '+')
    {
        cal = num1 + num2;
        printf("%f", cal);
    }
    else if (op == '-')
    {
        cal = num1 - num2;
        printf("%f", cal);
    }
    else
    {
        printf("Invalid command or operation");
    }
}