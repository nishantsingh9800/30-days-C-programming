#include <stdio.h>

int main()
{
    int rollNo[100], marks[100], n, i;
    char name[100][50];

    printf("===== Student Record System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &rollNo[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    // Display student records
    printf("\n===== Student Records =====\n");
    printf("-------------------------------------------------\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%d\n",
               rollNo[i],
               name[i],
               marks[i]);
    }

    return 0;
}