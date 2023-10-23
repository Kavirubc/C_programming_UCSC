#include <stdio.h>

int main()
{
    int arr[5];
    int temp = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1])
            temp = arr[i];
        else
            temp = arr[i + 1];
    }
    printf("%d", temp);

    return 0;
}