#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=n/2;i<=n;i+=2)
    {
        for(j=1;j<n-1;j+=2)
        {
            printf("#");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
}
