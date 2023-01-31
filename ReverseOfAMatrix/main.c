#include<stdio.h>
#include<malloc.h>

#define MALLOC(a,n,type)                    \
{                                           \
    a=(type*)malloc(n*sizeof(type));        \
    if(a==NULL)                             \
{                                           \
        printf("Insufficient Memory\n");    \
        return 0;                           \
}                                           \
}

void reverse(int *a,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf(" %d ",*(a+i));
    }
}

int main()
{
    int *a,n,i;

    printf("Enter The Number Of Elements\n");
    scanf("%d",&n);

    MALLOC(a,n,int);

    printf("Enter %d Elements Into The Array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }

    printf("The Array In Reverse Order Is Displayed Below\n");
    reverse(a,n);

    return 0;
}