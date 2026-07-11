#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, count = 0;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        int found = 0;

        for (int j = 0; j < count; j++)
        {
            if (arr1[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            unionArr[count++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        int found = 0;

        for (int j = 0; j < count; j++)
        {
            if (arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            unionArr[count++] = arr2[i];
        }
    }

    printf("Union of Arrays:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", unionArr[i]);
    }

    printf("\n");

    return 0;
}