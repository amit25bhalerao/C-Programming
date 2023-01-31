#include<stdio.h>
#include<stdlib.h>

void main()
{
    int m,n,i,j,k,sum1,sum2,sum;
    sum1=sum2=sum=0;
    printf("Enter The Size Of The Square Matrix i.e. Enter The Equal Values Of M and N\n");
    printf("Enter The Value Of M\n");
    scanf("%d",&m);
    printf("Enter The Value Of N\n");
    scanf("%d",&n);
    int a[m][n];

    if(m!=n)
    {
        printf("Wrong Input..");
        exit(0);
    }

    printf("Enter The Values In The Matrix Of Order %d*%d\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    k=m;

    if((m%2)!=0)
    {
        for(i=0;i<=m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    sum1=sum1+a[i][j];
                }
            }
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                if((i+j)==m-1)
                {
                    sum2 = sum2 + a[i][j];
                }
            }
        }
        sum=sum1+sum2;
        printf("The Sum Of Diagonals Of The Given Matrix Is %d ",sum);
    }

    if((m%2)==0)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    sum1=sum1+a[i][j];
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                if((i+j)==m-1)
                {
                    sum2 = sum2 + a[i][j];
                }
            }
        }
        sum=sum1+sum2;
        printf("The Sum Of Diagonals Of The Given Matrix Is %d ",sum);
    }
    exit(0);
}