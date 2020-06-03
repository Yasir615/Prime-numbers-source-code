/* This the second method to check whether the given number is prime or not.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    for(b=2;b<=a;b++)
    {
        if(a%b==0)
        {
            break;
        }
    }
    if(a==b)
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);
    }
    
}