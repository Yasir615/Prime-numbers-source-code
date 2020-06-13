/*
(Pattern 1.)
#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5;b++)
        {
            if(b<=a)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
           
        }
        printf("\n");
    }
}

output:-*
        **
        ***
        ****
        *****

*/

/* 
(Second method of pattern 1.but little bit lengthy)

#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=5;a++)
    {
        if(a==1)
            printf("*");

        else
            printf(" ");
    }
    printf("\n");
    for(a=1;a<=5;a++)
    {
        if(a<=2)
            printf("*");

        else
            printf(" ");
    }
    printf("\n");
    for(a=1;a<=5;a++)
    {
        if(a<=3)
            printf("*");

        else
            printf(" ");
    }
    printf("\n");
    for(a=1;a<=5;a++)
    {
        if(a<=4)
            printf("*");

        else
            printf(" ");
    }
    printf("\n");
    for(a=1;a<=5;a++)
    {
        if(a<=5)
            printf("*");

        else
            printf(" ");
    }   
}
output:-*
        **
        ***
        ****
        *****
*/


/*
(Pattern 2.)
#include<stdio.h>
int main()
{
    int a,b;
        for(b=1;b<=5;b++)
        {
            if(b==3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }  
        }
        printf("\n");
        for(b=1;b<=5;b++)
        {
            if(b!=1 && b<=4)
            {
                printf("*");
            } 
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        for(b=1;b<=5;b++)
        {
            if(b<=5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }   
            
            
        
} 
output:-  *
         ***
        *****
*/

/*Note:-Run the desired program after removing comments and output part.I have given output part so that you will understand that which type of output this program has been written for. */ 
