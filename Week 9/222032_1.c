#include   <stdio.h>
#include   <math.h>
int main()
{
    int num, temp, rem, sum = 0, n = 0 ;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        ++n;
    }
    temp = num;
    while (temp != 0)
    {
        rem = temp%10;
        sum += pow(rem, n);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}