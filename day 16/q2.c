#include<stdio.h>
void main(){
    int n,f=1;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i = n; i >=1; i--)
    {
        f=f*i;
    }
    printf("factorial is:%d",f);
    
}