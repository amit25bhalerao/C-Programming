#include<stdio.h>
#include<stdlib.h>

int fibo_naaci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return (fibo_naaci(n-1)+fibo_naaci(n-2));
}

void main()
{
    int i,n,j,temp,res;
    temp=0;

    printf("Enter The Value Of N ( N>0 ) Upto Which You Wish To Print The Fibonacci Triangle\n");
    scanf("%d",&n);

    if(n==0)
    {
        printf("Invalid Input Entered\n");
        exit(0);
    }

    printf("The Fibonacci Pattern Upto %d Is Displayed Below\n",n);

    for(i=1;i<=n;i++)
    {
        for(j=0;j<=temp;j++)
        {
            res=fibo_naaci(j);
            printf("%d ",res);
        }
        printf("\n");
        ++temp;
    }
    exit(0);
}