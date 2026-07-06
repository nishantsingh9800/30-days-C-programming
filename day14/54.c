#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element whose frequency you want to find: ");
    scanf("%d", &key);

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }

    // Display result
    if (count > 0)
        printf("Frequency of %d = %d\n", key, count);
    else
        printf("%d is not present in the array.\n", key);

    return 0;
}