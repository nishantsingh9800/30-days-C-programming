#include <stdio.h>

int reverse = 0;

// Recursive function to reverse the number
void reverseNumber(int n) {
    if (n == 0)
        return;

    reverse = reverse * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Reverse Number = -");
        num = -num;
    } else {
        printf("Reverse Number = ");
    }

    reverseNumber(num);

    printf("%d\n", reverse);

    return 0;
}