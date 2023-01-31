#include<stdio.h>

void main()
{
    int i,j,n;

    printf("\nEnter The Value Of N\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}