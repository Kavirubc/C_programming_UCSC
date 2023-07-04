#include <stdio.h>

int main()
{
    // Variable
    int year;
    // Getting input
    printf("Enter the year to check - ");
    scanf("%d", &year);
    // If statement
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("LeapYear\n");
    }
    else
    {
        printf("NotLeapYear\n");
    }
    return 0;
}