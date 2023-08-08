#include <stdio.h>

int main()
{
    int arr[3][3];
    int col, row;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            arr[row][col] = 0;
        }
    }
    arr[1][1] = 1;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d ", arr[row][col]);
        }
        putchar('\n');
    }
    return 0;
}