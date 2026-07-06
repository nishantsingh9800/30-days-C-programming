#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book book[100];
    int n;

    printf("===== Library Management System =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(int i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Enter Book Title: ");
        scanf("%s", book[i].title);

        printf("Enter Author Name: ");
        scanf("%s", book[i].author);

        printf("Enter Price: ");
        scanf("%f", &book[i].price);
    }

    // Display book details
    printf("\n===== Library Records =====\n");
    printf("\nID\tTitle\tAuthor\tPrice\n");
    printf("---------------------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t%.2f\n",
               book[i].bookId,
               book[i].title,
               book[i].author,
               book[i].price);
    }

    return 0;
}