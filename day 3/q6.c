#include<stdio.h>
void main(){
    int a,b,c;
        printf("enter value a:");
    scanf("%d",&a);
        printf("enter value b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swap\n");
    printf("value a:%d\n",a);
        printf("value b:%d",b);
}