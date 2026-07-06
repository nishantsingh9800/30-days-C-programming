#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {

        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print ascending characters
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++) {
            printf("%c", ch);
        }

        // Print descending characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}