#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // Inner loop to print the same number
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}