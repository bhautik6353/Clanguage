#include<stdio.h>
void main(){
    int a,b=1;
    printf("enter a number:");
    scanf("%d",&a);
    while (a>=b)
    {
        if (a%2 !=0)
        {
            printf("odd number:%d\n",a);
        }
        a--;
    }
    
}