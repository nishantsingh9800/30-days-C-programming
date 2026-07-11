#include <stdio.h>

int main()
{
    int arr[100], unique[100];
    int n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for (int j = 0; j < count; j++)
        {
            if (arr[i] == unique[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
        {
            unique[count] = arr[i];
            count++;
        }
    }

    printf("Array after removing duplicates:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", unique[i]);
    }

    printf("\n");

    return 0;
}