#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, sum;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow-wise Sum:\n");

    for(int i = 0; i < rows; i++)
    {
        sum = 0;

        for(int j = 0; j < cols; j++)
        {
            sum += a[i][j];
        }

        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    return 0;
}