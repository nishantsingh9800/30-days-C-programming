#include <stdio.h>

#define MAX 100

int roll[MAX], marks[MAX], count = 0;
char name[MAX][50];

// Function to add student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks: ");
    scanf("%d", &marks[count]);

    count++;

    printf("Student Added Successfully!\n");
}

// Function to display students
void displayStudents()
{
    int i;

    if (count == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\n===== Student Records =====\n");
    printf("------------------------------------------\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("------------------------------------------\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%d\n",
               roll[i],
               name[i],
               marks[i]);
    }
}

// Function to search student
void searchStudent()
{
    int id, i;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (roll[i] == id)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %d\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}