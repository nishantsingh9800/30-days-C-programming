#include <stdio.h>

int main() {
    long long num;
    long long largestPrimeFactor = -1;

    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    // Remove all factors of 2
    while (num % 2 == 0) {
        largestPrimeFactor = 2;
        num /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    // If num is still greater than 2, it is prime
    if (num > 2) {
        largestPrimeFactor = num;
    }

    printf("Largest Prime Factor = %lld\n", largestPrimeFactor);

    return 0;
}