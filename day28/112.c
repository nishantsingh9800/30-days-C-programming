#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contact[100];
    int n;

    printf(" Contact Management System \n");

    printf("Enter number of contacts: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", contact[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", contact[i].phone);

        printf("Enter Email: ");
        scanf("%s", contact[i].email);
    }
    printf("\n Contact List \n");
    printf("\nName\tPhone\t\tEmail\n");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%s\n",
               contact[i].name,
               contact[i].phone,
               contact[i].email);
    }

    return 0;
}