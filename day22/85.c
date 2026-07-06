#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find string length (excluding newline)
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is Not a Palindrome.\n");

    return 0;
}