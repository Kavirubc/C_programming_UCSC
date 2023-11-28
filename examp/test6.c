#include <stdio.h>
#include <string.h>
// create a new string variable
int main()
{
    char str[100], str2[100];
    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);

    puts(str);
    strlwr(str2, str);


    puts(str2);
    return 0;
}
