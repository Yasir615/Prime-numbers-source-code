/* This program is only to check one number at a time that whether a given number is even or not.*/
/*Note:Run only one program at a time,do not run both the programs at the same time. */

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is an even number",a);
    }
    else
    {
        printf("%d is not an even number",a);
    }
}


/* This program is to check all the even numbers between two given numbers.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(c=a;c<=b;c++)
    {
        if(c%2==0)
        {
            printf("%d is an even number \n",c);
        }
        else
        {
            printf("%d is not an even number \n",c);
        }
    }
}
