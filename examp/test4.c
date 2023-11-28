#include <stdio.h>

int main()
{

    int num = 5;
    int *prt;
    prt = &num;

    printf("%d\n", num);
    printf("%p\n", prt);
    printf("%i\n", *prt);
    printf("%p\n", &num);
    printf("%p\n", &prt);

    *prt = 10;
    printf("///////\n");
    printf("%d\n", num);
    printf("%p\n", &num);
    printf("%p\n", &prt);

    return 0;
}