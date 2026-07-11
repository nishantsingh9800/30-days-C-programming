#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i, searchId, found = 0;

    printf("===== Mini Employee Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Department: ");
        scanf("%s", emp[i].department);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n===== Employee Records =====\n");
    printf("-------------------------------------------------------------\n");
    printf("ID\tName\t\tDepartment\tSalary\n");
    printf("-------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               emp[i].empId,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchId);

    found = 0;

    for(i = 0; i < n; i++)
    {
        if(emp[i].empId == searchId)
        {
            printf("\nEmployee Found!\n");
            printf("Employee ID : %d\n", emp[i].empId);
            printf("Name        : %s\n", emp[i].name);
            printf("Department  : %s\n", emp[i].department);
            printf("Salary      : %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee not found.\n");
    }

    return 0;
}