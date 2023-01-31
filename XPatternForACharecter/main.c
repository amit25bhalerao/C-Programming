#include <stdio.h>
#include<stdlib.h>

void main()
{
    char ch;
    int n,i,j;

    printf("Enter The Character Whose \'X\' Pattern You Wish To Print\n");
    scanf("%c",&ch);

    printf("Enter The Value Of N Upto Which You Wish To Print The Pattern\n");
    scanf("%d",&n);

    char a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                a[i][j]=ch;
            if(i!=j)
                a[i][j]='\0';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if((i+j)==n-1)
                a[i][j]=ch;
            if((i+j)!=n-1)
                a[i][j]='\0';
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    exit(0);
}