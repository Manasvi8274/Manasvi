#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    int i=a;
    while (i<b+1)
    {
        if (i>0 && i<10)
        {
            if (i==1)
            {
                printf("one");
            }
            else if (i==2)
            {
                printf("two");
            }
            else if (i==3)
            {
                printf("three");
            }
            else if(i==4)
            {
                printf("four");
            }
            else if(i==5)
            {
                printf("five");
            }
            else if(i==6)
            {
                printf("six");
            }
            else if (i==7)
            {
                printf("seven");
            }
            else if(i==8)
            {
                printf("eight");
            }
            else
            {
                printf("nine");
            }
        }
        else
        {
            if(i%2==0)
            {
                printf("even");
            }
            else {
            printf("odd");
            }
        }
    printf("\n");
    i+=1;
    }
    return 0;
}

