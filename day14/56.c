#include <stdio.h>

int main()
{
    int arr[100], n;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for (int i = 0; i < n; i++)
    {
        int isDuplicate = 0;

        // Check if current element has already been printed
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate)
            continue;

        // Count occurrences
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > 1)
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("No duplicate elements.");

    printf("\n");

    return 0;
}