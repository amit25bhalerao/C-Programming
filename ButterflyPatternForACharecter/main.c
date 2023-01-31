#include<stdio.h>
#include<stdlib.h>

void main()
{
    char ch;
    int i,j,k,temp,temp1,space;

    printf("Enter The Character Whose Butterfly Pattern You Wish To Print Out\n");
    scanf("%c",&ch);

    printf("Enter The Value Of N Upto Which You Wish To Print The Pattern\n");
    scanf("%d",&temp);

    if((temp%2)==0)
    {
        for(i=1;i<=temp/2;i++)
        {
            for(j=1;j<=i;j++)
                printf("%c ",ch);
            for(space=(i+1);space<=(temp-i);space++)
                printf("  ");
            for(k=1;k<=i;k++)
                printf("%c ",ch);
            printf("\n");
        }

        temp1=temp;

        for(i=0;i<temp/2;i++)
        {
            for(k=1;k<=temp1/2;k++)
                printf("%c ",ch);
            for(space=0;space<(2*i);space++)
            {
                if(i==0)
                    continue;
                printf("  ");
            }
            for(k=1;k<=temp1/2;k++)
                printf("%c ",ch);
            printf("\n");
            temp1=temp1-2;
        }
        exit(0);
    }
    else
    {
        for(i=1;i<=(temp/2);i++)
        {
            for(j=1;j<=i;j++)
                printf("%c ",ch);
            for(space=(i+1);space<=(temp-i);space++)
                printf("  ");
            for(k=1;k<=i;k++)
                printf("%c ",ch);
            printf("\n");
        }

        for(i=1;i<=temp;i++)
            printf("%c ",ch);

        printf("\n");

        temp1=temp;

        for(i=0;i<(temp/2);i++)
        {
            for(k=1;k<=(temp1/2);k++)
                printf("%c ",ch);
            printf("  ");
            for(space=0;space<(2*i);space++)
            {
                if(i==0)
                    continue;
                printf("  ");
            }
            for(k=1;k<=(temp1/2);k++)
                printf("%c ",ch);
            printf("\n");
            temp1=temp1-2;
        }
        exit(0);
    }
}