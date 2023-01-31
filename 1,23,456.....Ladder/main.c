#include<stdio.h>

void main()
{
    int i,j,k,n;
    k=1;

    printf("Enter The Value Of N\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",k);
            ++k;
        }
        printf("\n");
    }
}