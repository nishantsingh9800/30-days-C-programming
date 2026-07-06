#include<stdio.h>

int main(){
    int i,n,n1,n2,lcm;
    printf("Enter 2 numbers :");
    scanf("%d %d",&n1,&n2);
    if (n1>n2)
    {
        n=n1;
    }
    else {
        n=n2;
    }
    for (i=2;i<=n;i++)
    {
        if(n1%i==0 && n2%i==0)
        lcm=i;
    }
    printf("Lcm of given numbers is : %d",lcm);


}