#include<stdio.h>
void main(){
    for (int i = 5; i >=1; i--)
    {
        for (int k = 4; k >=i; k--)
        {
            printf(" ");
        }
        for (int j = i; j >=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
        
    }
    
}