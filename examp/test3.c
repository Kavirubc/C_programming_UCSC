#include <stdio.h>

#define CONCAT(a, b, c) a##b##c

int main()
{
    int abc = 301;
    printf("Concatenated value: %d\n", CONCAT(a, b, c));

    return 0;
}
