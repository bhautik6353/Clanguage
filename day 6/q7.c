#include<stdio.h>
void main(){
        int a;
    printf("enter a mark:");
    scanf("%d",&a);
        if (a>=50)
    {
        printf("`Congratulations! You have passed the exam` %d",a);
    }
    else{
              printf("`Sorry! You failed the exam better luck next time` %d",a);
    }
}