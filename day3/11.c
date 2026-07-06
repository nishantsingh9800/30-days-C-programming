#include<stdio.h>

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int n;
    if(n1>n2){
        n = n2;
    }
    else{
        n = n1;
    }
    int gcd = 1;
    for(int i=2;i<=n;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }

    printf("gcd is %d ",gcd);
}