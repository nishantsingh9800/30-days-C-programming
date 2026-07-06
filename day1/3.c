#include <stdio.h>

int main()
{
 int n,i,fac=1;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("Factorial of given number is :\n");
 for (i=1;i<=n;i++)
 {
   fac=fac*i;
 }
 printf("%d",fac);
return 0;
}