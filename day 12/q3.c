#include<stdio.h>
void main(){
    int a,first,last,d;
    printf("enter a number:");
    scanf("%d",&a);
    first=a;
    while (first>=10)
    {
        first/=10;
    }
    last=a%10;
    d=first + last;
    printf("%d",d);
    
}