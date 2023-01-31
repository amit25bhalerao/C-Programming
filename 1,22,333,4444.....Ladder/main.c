#include<stdio.h>

void main()
{
    int i,j,k,n;

    printf("\nEnter The Value Of N\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)
            {
                for(k=1;k<=j;k++)
                {
                    printf(" %d ",j);
                }
            }
        }
        printf("\n");
    }
}