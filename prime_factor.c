/* First method to check prime factors of a number using while loop */

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    printf("the prime factor of %d are:",a);
    for(b=2;a>1;b++)
    {
        while(a%b==0)
        {
            printf("%d ",b);
            a=a/b;
        }
    }
}


/*Second method to check prime factor of a number using for loop */

#include<stdio.h>
int main()
{
    int a,i,j,ok;
    printf("enter a number");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            ok=1;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    ok=0;
                    break;
                }
            }
            if(ok==1)
            {
                printf("factor of %d are:%d",a,i);
                printf("\n");
            }
        }
    }
}



/*First method to check prime factors of all the numbers between two numbers. For Eg:-If you give input as 1 to 100,then it will show you all the prime
factors of all the numbers between 1 to 100*/

#include<stdio.h>
int main()
{
    int i,j,num,mun,k,isPrime;
    printf("enter two numbers to print prime factors between those two numbers");
    scanf("%d%d",&num,&mun);
    printf("There are no prime factors of 1 \n");
    for(k=num;k<=mun;k++)
    {
    for(i=2;i<=k;i++)
    {

        if(k%i==0)
        {
            isPrime=1;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    isPrime=0;
                    break;
                }
            }
            if(isPrime==1)
            {
                printf("the prime factors of %d are: ",k);
                printf("%d ",i);
                printf("\n");
                }
            }
        }
    }
}

/*First method to check prime factors of all the numbers between two numbers using functions. For Eg:-If you give input as 1 to 100,then it will show you all the prime
factors of all the numbers between 1 to 100*/

#include<stdio.h>
void primefactors(int num)
{
int count;
printf("The factors of %d are: ",num);
for(count=2;num>1;count++)
{
    while(num%count==0)
    {
        printf("%d \n",count);
        printf("\n");
        num=num/count;
    }
}
}
int main()
{
    int num,a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(num=a;num<=b;num++)
   
    primefactors(num);

    return 0;

}

/*Second method to check prime factor of a number using functions */

#include<stdio.h>
void primefactors(int num)
{
int count;
printf("The factors of %d are: ",num);
for(count=2;num>1;count++)
{
    while(num%count==0)
    {
        printf("%d ",count);
        num=num/count;
    }
}
}
int main()
{
    int num;
    printf("enter a positive integer");
    scanf("%d",&num);

    primefactors(num);

    return 0;

}


