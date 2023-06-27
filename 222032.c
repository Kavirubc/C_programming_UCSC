#include <stdio.h>
int main()
{
    // Defining variables
    float mark1, mark2, avg_mark;
    // Getting input for mark1
    printf("Enter marks for the subject 1: ");
    scanf("%f", &mark1);
    // Getting input for mark1
    printf("Enter marks for the subject 2: ");
    scanf("%f", &mark2);
    // Data validation
    if (mark1 <= 100 && mark2 <= 100)
    {
        // After validation calculation
        avg_mark = ((mark1 + mark2) / 2);
        // For grade A
        if (avg_mark >= 75)
        {
            printf("Your grade is A");
        }
        // For grade B
        else if (avg_mark >= 65)
        {
            printf("Your grade is B");
        }
        // For grade C
        else if (avg_mark >= 55)
        {
            printf("Your grade is C");
        }
        // For grade D
        else if (avg_mark >= 35)
        {
            printf("Your grade is D");
        }
        // For grade E
        else
        {
            printf("our grade is E");
        }
        // Remove "//" line below if you want to see whether the calculation is accurate.(Means decimal point calculations are done.)

        // printf("Average marks %f", avg_mark);
    }
    // Data validation error. (If one of the marks enter is greater than 100 then this error will be executed.)
    else
    {
        printf("Please enter the marks again after rechecking.");
    }
    return 0;
}