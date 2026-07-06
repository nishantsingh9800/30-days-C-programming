#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            if (freq[(unsigned char)str[i]] == 0)
            {
                printf("%c", str[i]);
                freq[(unsigned char)str[i]] = 1;
            }
        }
    }

    printf("\n");

    return 0;
}