#include<stdio.h>
void main(){
    float w,h,bmi;
    printf("enter value of weight:");
    scanf("%f",&w);
        printf("enter value of height:");
    scanf("%f",&h);
    bmi=w/(h*h);
    printf("Body Mass Index (BMI):%f",bmi);
}