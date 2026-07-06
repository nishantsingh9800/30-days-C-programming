#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int num)
{
    int original = num;
    int digits = 0;
    int sum = 0;
    int remainder;

    // Count number of digits
    int temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    // Special case for 0
    if (num == 0)
        digits = 1;

    temp = num;

    // Calculate sum of digits raised to the power of digits
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += (int)pow(remainder, digits);
        temp /= 10;
    }

    // Special case for 0
    if (num == 0)
        sum = 0;

    return (sum == original);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}