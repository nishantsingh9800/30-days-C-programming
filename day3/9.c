#include <stdio.h>
int isprime();
int main()
{
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    if (isprime(n))
    {
        printf("Number is prime");
    }
    else 
    {
        printf("Number is not prime");
    }
    }

int isprime(int n)
{
   for (int i=2;i<n;i++)
    {
    if (n%i==0)
    {
    return 0;
    }

}
return 1;
}