#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book book[100];
    int n, i, searchId, found = 0;

    printf("===== Mini Library System =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Enter Book Title: ");
        scanf("%s", book[i].title);

        printf("Enter Author Name: ");
        scanf("%s", book[i].author);

        printf("Enter Quantity: ");
        scanf("%d", &book[i].quantity);
    }

    // Display all books
    printf("\n===== Library Records =====\n");
    printf("-------------------------------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tQuantity\n");
    printf("-------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t%d\n",
               book[i].bookId,
               book[i].title,
               book[i].author,
               book[i].quantity);
    }

    // Search by Book ID
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    found = 0;

    for(i = 0; i < n; i++)
    {
        if(book[i].bookId == searchId)
        {
            printf("\nBook Found!\n");
            printf("Book ID   : %d\n", book[i].bookId);
            printf("Title     : %s\n", book[i].title);
            printf("Author    : %s\n", book[i].author);
            printf("Quantity  : %d\n", book[i].quantity);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Book not found.\n");
    }

    return 0;
}