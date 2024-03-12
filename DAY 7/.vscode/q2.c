#include <stdio.h>
int main()
{
    int a,b,c,d;
    a=100;
    b=50;
    c=60;
    d=200;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is max");
            }
            else
            {
                if (d > b)
                {
                    if (d > c)
                    {
                        printf("d is max");
                    }
                }
            }
        }
        else
        {
            if (c > b)
            {
                if (c > d)
                {
                    printf("c is max");
                }
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is max");
            }
            else
            {
                printf("d is max");
            }
        }
        else
        {
            printf("c is max");
        }
    }

    return 0;
}