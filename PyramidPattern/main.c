#include <stdio.h>

void main()
{
    int i,j,k,l,n,p;

    printf("Enter The Value Of N Upto Which You Wish To Print\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf(" # ");
        }
        for(l=n-1;l>=i;l--)
        {
            printf(" ");
        }
        printf("\n");
    }
}