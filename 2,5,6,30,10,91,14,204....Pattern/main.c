#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,temp,sum,n;
    sum=0;

    printf("Enter The Value Of N\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if((i%2)!=0)
        {
            temp=i*2;
            printf("%d ",temp);
        }
        sum=sum+i*i;
        if((i%2)==0)
        {
            printf("%d ",sum);
        }
    }
    exit(0);
}