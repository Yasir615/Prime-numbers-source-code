#include<stdio.h>
int main(int argc,char *argv[])
{
    int a,b,c,d,e,sum=0;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    for(c=a;c<b;c++)
    {
        e=0;
        for(d=2;d<c;d++)
        {
            if(c%d==0)
            {
                e=1;
                break;
            }
        }
        if(e==0 && c!=1)
        {
            sum=sum+c;
        }
    }
	printf("%d",sum);
}


