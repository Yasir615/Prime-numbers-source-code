/* This is the 2nd method to check the prime number between two numbers. */
#include<stdio.h>
int main()
{
    int a,b,c,d,count;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(c=a;c<=b;c++)
    {
        count=0;
        for(d=2;d<c;d++)
        {
            if(c%d==0)
            {
                count=1;
                break;
            }
        }
        if(count==0 && c!=1)
        {
            printf("%d is a prime number \n",c);
        }
        else
        {
            if(count!=0 || c==1)
            {
            printf("%d is not a prime number \n",c);
            }
        }
        
    }

}