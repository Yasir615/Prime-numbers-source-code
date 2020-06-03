/* This is the first method to check whether the given number is prime or not*/
#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("enter a number");
    scanf("%d",&a);
    for(b=2;b<=a;b++)
    {
        if(a%b==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);
    }
    
}