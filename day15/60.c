#include <stdio.h>

int main()
{
    int arr[100], n;
    int count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill remaining positions with zeros
    while (count < n)
    {
        arr[count] = 0;
        count++;
    }

    // Display updated array
    printf("Array after moving zeroes to the end:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}