#include<stdio.h>
void main(){
    int a,i=2;
    printf("enter a number:");
    scanf("%d",&a);
    do
    {
        printf("%d\n",i);
        i+=2;
    } while (i<=a);
    
}