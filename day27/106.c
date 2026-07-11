#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n;

    printf(" Employee Management System \n");

    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n Employee Records \n");
    printf("\nID\tName\tSalary\n");
    printf("--------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n",
               emp[i].empId,
               emp[i].name,
               emp[i].salary);
    }

    return 0;
}