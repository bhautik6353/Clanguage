#include<stdio.h>
void main(){
    int a=50,b=20,c=10;

    if(a<b){
        if (a<c)
        {
           printf("A is minimum"); 
        }
        else{
            printf("c is minimum");
        }
        
    }
else{
    if(b<c){
        printf("B is minimum");
    }
    else{
        printf("C is minimum");
    }
}
}