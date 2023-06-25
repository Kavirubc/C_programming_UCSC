#include <stdio.h>
int main()
{
    char *names[] = {"Kaviru", "Kavishka", "Uthum", "Pankaja", "Thisuli"};
    int n = 0;
    for (n = 0; n < 5;)
    {
        printf("%s\n", names[n]);
        n = n + 1;
    }
    return 0;
}