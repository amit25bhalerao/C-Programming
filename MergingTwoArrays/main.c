#include <stdio.h>
#include <stdlib.h>

int *a1,*a2,*a3;
int m,n,e,k;

void merge(int* a, int* b, int* c,  int x, int y);
int *create(int* a, int r);
void sort(int* b, int z);

void main()
{
    printf("\nEnter The Number Of Elements In First Array\n");
    scanf("%d",&m);
    if(m!=0)
    {
        printf("Enter %d Elements Into The Array\n",m);
        a1=create(a1,m);
        printf("The Sorted Elements Are\n");
        sort(a1,m);
    }
    else
    {
        printf("First Array Is Empty\n");
    }


    printf("\nEnter The Number Of Elements In Second Array\n");
    scanf("%d",&n);
    if(n!=0)
    {

        printf("Enter %d Elements Into The Array\n",n);
        a2=create(a2,n);
        printf("The Sorted Elements Are\n");
        sort(a2,n);
    }
    if(n==0)
    {
        printf("Second Array Is Empty\n");
    }

    k=m+n;
    a3=(int*)calloc(k, sizeof(int));
    if(a3==NULL)
    {
        printf("Insufficient Memory\n");
        return;
    }
    if((m==0)&&(n!=0))
    {
        printf("The Merged Array Is Displayed Below\n");
        for(e=0;e<n;e++)
            printf(" %d ",*(a2+e));
        exit(0);
    }
    if((n==0)&&(m!=0))
    {
        printf("\nThe Merged Array Is Displayed Below\n");
        for(e=0;e<m;e++)
            printf(" %d ",*(a1+e));
        exit(0);
    }
    if((m==0)&&(n==0))
    {
        printf("\nMerged Array Doesnt Contain Any Element\n");
        exit(0);
    }
    if((m!=0)&&(n!=0))
    {
        merge(a1,a2,a3,m,n);
        printf("\nThe Merged Array Is Displayed Below\n");
        sort(a3,k);
        exit(0);
    }
}



int *create(int* a, int r)
{
    int i;
    a=(int* )calloc(r, sizeof(int));
    if(a==NULL)
    {
        printf("Insufficient Memory\n");
        exit(0);
    }
    for(i=0;i<r;i++)
    {
        scanf("%d",(a+i));
    }
    printf("Memory Created Successfully\n");
    return a;
}

void sort(int* b, int z)
{
    int i, j, temp;
    for (i = 0; i < z; i++)
    {
        for (j = i + 1; j < z; j++)
        {
            if (*(b + i) > *(b + j))
            {
                temp = *(b + i);
                *(b + i) = *(b + j);
                *(b + j) = temp;
            }
        }
    }
    for(i=0;i<z;i++)
    {
        printf(" %d ",*(b+i));
    }
    printf("\n\n");
}

void merge(int* a, int* b, int* c, int x, int y)
{
    int i,j;
    i=j=0;
    while(i<=x)
    {
        *(c+i)=*(a+i);
        i++;
    }
    i=i-1;
    while(j<=y)
    {
        *(c+i)=*(b+j);
        i++;
        j++;
    }

}