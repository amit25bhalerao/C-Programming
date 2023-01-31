#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,n,num;

    printf("Enter The Number Whose Multiplication Table Is To Be Created Upto N\n");
    scanf("%d",&num);
    printf("Enter The Value Of N\n");
    scanf("%d",&n);

    printf("The Multiplication Table Is Displayed Below\n");

    for(i=0;i<=n;i++)
    {
        printf("%d * %d = %d\n",num,i,(num*i));
    }

    exit(0);
}