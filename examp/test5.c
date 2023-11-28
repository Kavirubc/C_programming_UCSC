#include <stdio.h>

void swap(int *m, int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

void swap2(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("After swap2 inside: x = %d, y = %d\n", x, y);
}

int main()
{
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    int o = x;
    printf("o = x = %d\n", o);
    swap2(x, y);
    printf("After swap2 outside: x = %d, y = %d\n", x, y);

    return 0;
}