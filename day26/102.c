#include <stdio.h>

int main()
{
    char name[50];
    int age;

    printf(" Voting Eligibility System \n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nHello %s\n", name);
        printf("You are Eligible to Vote.\n");
    }
    else
    {
        printf("\nHello %s\n", name);
        printf("You are Not Eligible to Vote.\n");
        printf("You can vote after %d year(s).\n", 18 - age);
    }

    return 0;
}