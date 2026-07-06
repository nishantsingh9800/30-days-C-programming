#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            freq[(unsigned char)str[i]]++;
        }
    }

    // Find first non-repeating character
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n' &&
            freq[(unsigned char)str[i]] == 1)
        {
            printf("First Non-Repeating Character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}