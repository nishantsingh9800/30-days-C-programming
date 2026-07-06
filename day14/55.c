#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find largest and second largest
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("Second largest element does not exist.\n");
    else
        printf("Second Largest Element = %d\n", secondLargest);

    return 0;
}