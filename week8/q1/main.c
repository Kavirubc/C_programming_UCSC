// Write a C program that calculates the factorial of a given positive integer using recursion.The user should input the value, and the program should output the factorial.

#include <stdio.h>

int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
        return x * factorial(x - 1);
}

int main()
{
    printf("Factorial is %d ", factorial(5));
}