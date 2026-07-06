#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        int originalNum = num;
        int temp = num;
        int digits = 0;
        int sum = 0;

        // Count the number of digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate the sum of each digit raised to the power of digits
        while (temp != 0) {
            int remainder = temp % 10;
            sum += (int)pow(remainder, digits);
            temp /= 10;
        }

        // Special case for 0
        if (num == 0)
            sum = 0;

        // Check Armstrong number
        if (sum == originalNum)
            printf("%d ", originalNum);
    }

    printf("\n");

    return 0;
}