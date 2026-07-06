#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // Character to print
        char ch = 'A' + i - 1;

        // Inner loop to print the character repeatedly
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}