#include <stdio.h>

struct Product
{
    int productId;
    char productName[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int n, i;

    printf(" Inventory Management System \n");

    printf("Enter number of products: ");
    scanf("%d",n);
    for(i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &p[i].productId);

        printf("Enter Product Name: ");
        scanf("%s", p[i].productName);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }
    printf("\n===== Inventory Details =====\n");
    printf("------------------------------------------------------------\n");
    printf("ID\tProduct\t\tQuantity\tPrice\n");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%d\t\t%.2f\n",
               p[i].productId,
               p[i].productName,
               p[i].quantity,
               p[i].price);
    }

    return 0;
}