#include <stdio.h>
#include<malloc.h>

#define MALLOC(a,n,type)                    \
{                                           \
    a=(type*)malloc(n*sizeof(type));        \
    if(a==NULL)                             \
    {                                       \
        printf("Insufficient Memory\n");    \
        return (0);                         \
    }                                       \
}
void sort(int *a,int n)
{
        int i,j,temp;
        for(j=1;j<n;j++)
        {
            for(i=0;i<n-j;i++)
            {
                if(*(a+i)>*(a+i+1))
                {
                    temp=*(a+i);
                    *(a+i)=*(a+i+1);
                    *(a+i+1)=temp;
                }
            }
        }
}

int main()
{
    int n, *a, i;

    printf("Enter The Number Of Elements\n");
    scanf("%d", &n);

    MALLOC(a, n, int) ;

        printf("Enter %d Elements Into The Array\n", n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", (a + i));
        }
        sort(a, n);

        printf("The Sorted Elements In Ascending Order Are Listed Below\n");
        for (i = 0; i < n; i++)
        {
            printf(" %d ", *(a + i));
        }
}
