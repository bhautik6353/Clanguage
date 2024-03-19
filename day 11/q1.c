#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        sum=sum+i;

    }
    printf("The sum of all numbers:%d",sum);
    
}