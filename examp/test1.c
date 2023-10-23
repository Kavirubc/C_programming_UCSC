#include <stdio.h>

int main()
{
    int a = 10;
    char b = 'A';
    printf("%d, %d", sizeof(a), sizeof(b));
    printf(", %d", (b));
    return 0;
}
