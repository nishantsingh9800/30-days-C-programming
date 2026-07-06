#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = rows; i >= 1; i--) {

        // Inner loop to print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}