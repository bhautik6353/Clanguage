#include<stdio.h>
void main(){
    int f=0,s=1,n,b;
        printf("enter a number:");
    scanf("%d",&b);
    for (int i = 1; i <=b; i++)
    {
        printf("%d\n",f);
        n=s+f;
        f=s;
        s=n;
    }
    
}