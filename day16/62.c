#include <stdio.h>

int main()
{
    int arr[100], n;
    int maxCount = 0, maxElement;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        int visited = 0;
        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                visited = 1;
                break;
            }
        }

        if(visited)
            continue;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);

    return 0;
}