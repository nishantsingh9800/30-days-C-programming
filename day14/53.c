#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}