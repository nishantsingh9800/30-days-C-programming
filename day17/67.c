#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n1, n2;
    int found;

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

    printf("Intersection of Arrays:\n");

    found = 0;

    for (int i = 0; i < n1; i++)
    {
        int duplicate = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr1[i] == arr1[k])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate)
            continue;

        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
    {
        printf("No common elements");
    }

    printf("\n");

    return 0;
}