#include <stdio.h>

int main()
{
    char word[] = {"cevic"};
    int flag, num = (sizeof(word) / sizeof(word[0]) - 1);
    printf("%d\n", num);
    for (int i = 0; i < num; i++)
    {
        if (word[i] != word[num - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Not a palindrome");
    }
    else
    {
        printf("Word is a Palindorme");
    }

    return 0;
}