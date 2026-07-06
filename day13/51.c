#include <stdio.h>

int main()
{
    int arr[100], n;
    int largest, smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest and smallest
    largest = smallest = arr[0];

    // Find largest and smallest
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest Element = %d\n", largest);
    printf("Smallest Element = %d\n", smallest);

    return 0;
}