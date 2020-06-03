/* This is the 1st method to check the prime number between two numbers. */
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(c=a;c<b;c++)
    {
        for(d=2;d<=c;d++)
        {
            if(c%d==0)
            {
                break;
            }
        }
        if(c==d)
        {
            printf("%d is a prime number \n",c);
        }
        else
        {
            printf("%d is not a prime number \n",c);
        }
        
    }
}