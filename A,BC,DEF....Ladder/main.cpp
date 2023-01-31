#include<stdio.h>
#include <stdlib.h>

int main()
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
            ++k;
        }
        printf("\n");
    }
    return 0;
}