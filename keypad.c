#include <stdio.h>
#include <string.h>

int calculate_typing_time(char *message)
{
    char *keypad[] = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    int length = strlen(message);
    int total_time = 0;
    int prev_key = -1;
    int prev_count = 0;

    for (int i = 0; i < length; i++)
    {
        char c = message[i];
        int key, count;

        if (c >= '2' && c <= '9')
        {
            key = c - '0';
            count = strchr(keypad[key], c) - keypad[key] + 1;
        }
        else if (c == '0')
        {
            key = 0;
            count = 1;
        }
        else if (c == '1')
        {
            key = 1;
            count = 1;
        }
        else if (c == ' ')
        {
            key = 0;
            count = 2;
        }
        else if (c == '.')
        {
            key = 1;
            count = 2;
        }

        if (prev_key == key)
        {
            total_time += 0.7;
            total_time += count * 0.2;
        }
        else
        {
            if (prev_key != -1)
                total_time += 0.4;
            total_time += count * 0.2;
        }

        prev_key = key;
        prev_count = count;
    }

    return total_time * 1000;
}

int main()
{
    char message[100];
    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);

    // Remove trailing newline character if present
    if (message[strlen(message) - 1] == '\n')
        message[strlen(message) - 1] = '\0';

    int typing_time = calculate_typing_time(message);
    printf("Minimum time to type the message: %d milliseconds\n", typing_time);

    return 0;
}
