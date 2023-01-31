#include<stdio.h>
#include <stdlib.h>

void main()
{
    int i,j,n;
    char k='A';
    printf("\nEnter The Value Of N Upto Which You Wish To Print The Pattern\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c ",k);
        }
        printf("\n");
        ++k;
    }
    exit(0);
}