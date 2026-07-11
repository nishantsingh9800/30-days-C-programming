#include <stdio.h>

int main()
{
    int a[10][10];
    int n, sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    printf("Sum of Principal Diagonal = %d\n", sum);

    return 0;
}