#include <stdio.h>
#include <string.h>

int main()
{
    char words[20][50], temp[50];
    int n;

    printf("Enter the number of words: ");
    scanf("%d", &n);
    printf("Enter the words:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(words[i]) > strlen(words[j]))
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords Sorted by Length:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}