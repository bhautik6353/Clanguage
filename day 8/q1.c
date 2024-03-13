#include<stdio.h>
void main(){
    int a,b,c;
    a=5;
    b=10;
    c=2;
    (a<b)?(a<c)?  printf("A is small"):printf("C is small"):
    (b<c)?printf("b is small"):printf("c is small");
}