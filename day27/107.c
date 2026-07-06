#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float pf;
    float netSalary;
};

int main()
{
    struct Employee emp;
    
    printf("===== Salary Management System =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    printf("Enter HRA: ");
    scanf("%f", &emp.hra);

    printf("Enter DA: ");
    scanf("%f", &emp.da);

    printf("Enter PF: ");
    scanf("%f", &emp.pf);

    // Calculate Net Salary
    emp.netSalary = emp.basicSalary + emp.hra + emp.da - emp.pf;

    printf("\n===== Salary Details =====\n");
    printf("Employee ID   : %d\n", emp.empId);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basicSalary);
    printf("HRA           : %.2f\n", emp.hra);
    printf("DA            : %.2f\n", emp.da);
    printf("PF            : %.2f\n", emp.pf);
    printf("Net Salary    : %.2f\n", emp.netSalary);

    return 0;
}