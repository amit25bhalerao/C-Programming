#include <stdio.h>

void main()
{
    int i,j,temp,n;
    temp=0;

    printf("Enter The Number Of rows\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            ++temp;
            printf(" %d ",temp);
        }
        printf("\n");
    }
}