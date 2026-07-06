#include <stdio.h>

int main()
{
    int n,rev=0,r;
    int num;
    printf("Enter the number :");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    if (num==rev)
    {
        printf("Number is palindrome.");
    }
    else 
    {
    printf("Number is not palindrome.");
    }
}