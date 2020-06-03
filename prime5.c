/* This is the 3rd method to check the prime number between two numbers */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,count;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(c=a;c<=b;c++)
    {
        e=(ceil(sqrt(c)));
        count=0;
        for(d=2;d<=e;d++)
        {
            if(c%d==0)
            {
                count=1;
                break;
            }
        }
        if(count==0 && c!=1 || c==2 || c==3)
        {
            printf("%d is a prime number \n",c);
        }
        else
        {
            printf("%d is not a prime number \n",c);
        }
        
    }
}