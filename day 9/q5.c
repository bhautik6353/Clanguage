#include<stdio.h>
void main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the last number:");
    scanf("%d",&b);

    while (a<=b)
    {
       if (a%4==0)
       {
        printf("%d\n",a);
       }
       a++;
       
    }
    
}