#include <stdio.h>

int main()
{
    int a, b;
    int *ptr;
    a = 1234;
    ptr = &a;
    b = *ptr;
    printf("%d,%d", a, b);
    return 0;
}