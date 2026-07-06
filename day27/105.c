#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n;

    printf("===== Student Record Management System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n===== Student Records =====\n");

    printf("\nRoll No\tName\tMarks\n");
    printf("------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n",
               s[i].rollNo,
               s[i].name,
               s[i].marks);
    }

    return 0;
}