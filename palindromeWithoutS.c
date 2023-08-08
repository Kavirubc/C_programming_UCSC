#include <stdio.h>



int main()
{
    int n;
    printf("Enter the number of letter: ");
    scanf("%d", &n);
    char word[n];
    printf("Enter the word: ");
    scanf("%c", &word[n]);
    printf("%c", word[n]);
    return 0;
}