#include <stdio.h>

int main()
{
    int n;
    int cnt = 0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        n = n/10;
        cnt++;
    }
    printf("the number of digitis in the given number is %d ",cnt);
}