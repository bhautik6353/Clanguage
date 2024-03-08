#include<stdio.h>
void main(){
    int mark;
    printf("enter a mark:");
    scanf("%d",&mark);
    if (mark>=90 && mark<=100)
    {
        printf("your mark are %d\n",mark);
        printf("your grade is A");
    }
    else if(mark>=80 && mark<=89)
    {
        printf("your mark are %d\n",mark);
        printf("your grade is B");
    }
        else if(mark>=70 && mark<=79)
    {
        printf("your mark are %d\n",mark);
        printf("your grade is C");
    }
        else if(mark>=60 && mark<=69)
    {
        printf("your mark are %d\n",mark);
        printf("your grade is D");
    }
        else if(mark>=0 && mark<=59)
    {
        printf("your mark are %d\n",mark);
        printf("your grade is F");
    }
    
}