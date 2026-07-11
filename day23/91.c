#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != ' ' && str1[i] != '\n')
        {
            freq[(unsigned char)str1[i]]++;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != ' ' && str2[i] != '\n')
        {
            freq[(unsigned char)str2[i]]--;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("The strings are Not Anagrams.\n");
            return 0;
        }
    }

    printf("The strings are Anagrams.\n");

    return 0;
}