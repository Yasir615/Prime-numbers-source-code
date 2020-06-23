/* This program is to check whether the given number is an odd number or not */
/*Note:-Please do not run both the programs at the same time,run only one program at a time */
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("%d is an odd number",a);
    }
    else
    {
        printf("%d is not an odd number",a);
    }
}


/*This program is to check all the odd numbers between two numbers */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(c=a;c<=b;c++)
    {
        if(c%2!=0)
        {
            printf("%d is an odd number \n",c);
        }
        else
        {
            printf("%d is not an odd number \n",c);
        }
    }
}
