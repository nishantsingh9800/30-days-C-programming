#include <stdio.h>

int main()
{
    int arr[100], n;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}