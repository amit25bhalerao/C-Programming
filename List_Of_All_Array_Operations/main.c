#include<stdio.h>
#include<stdlib.h>

void traverse(int a[],int n);
int insert(int a[],int n);
int delete(int a[],int n);
void search(int a[],int n);
void update(int a[],int n);



void main()
{
    for (;;)
    {
        int a[1000], n, i;
        int c;
        printf("\nWelcome To Array Operation Portal\n");
        printf("Enter #1 For Traversing\nEnter #2 For Insert\nEnter #3 For Delete\n");
        printf("Enter #4 For Search\nEnter #5 For Update\n");
        printf("Enter #6 For Exit\n");
        printf("\n");
        printf("Enter Your Choice\n");
        scanf("%d",&c);
        if(c==6)
        {
            printf("Thank you...Visit Again...  :) : ) : )\n");
            printf("\n");
            return;
        }

        printf("\nEnter The Number Of Elements In Array\n");
        scanf("%d", &n);
        printf("Enter %d Elements Into The Array\n",n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        switch (c) {
            case 1:
                traverse(a,n);
                break;
            case 2:
                insert(a,n);
                break;
            case 3:
                delete(a,n);
                break;
            case 4:
                search(a,n);
                break;
            case 5:
                update(a,n);
                break;
            default:
                printf("Invalid Input Entered....Please Try Again\n");
        }
    }
}

void traverse(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Array Is Traversed Successfully\n");
    printf("\n");
}

int insert(int a[], int n)
{
    int pos, item,k,i;
    printf("Enter The Position At Which You Wish To Enter The New Element\n");
    scanf("%d", &pos);

    if ((pos < 0) || (pos > n))
    {
        printf("Invalid Position Entered...Please Try Again\n");
        return 0;
    }
    printf("Enter The Item To Be Inserted\n");
    scanf("%d", &item);
    printf("Initial Array Is Displayed Below\n");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    printf("\n");
    if(pos==0)
    {
        for(k=n-1;k>=pos-1;k--)
        {
            a[k+1]=a[k];
        }
        a[0]=item;
        printf("The Resultant Array Is Displayed Below\n");
        for(k=0;k<=n;k++)
        {
            printf("%d\t",a[k]);
        }
        printf("\n");
    }
    else
    {
        for(k=n-1;k>=pos-1;k--)
        {
            a[k+1]=a[k];
        }
        a[pos-1]=item;
        printf("The Resultant Array Is Displayed Below\n");
        for(k=0;k<=n;k++)
        {
            printf("%d\t",a[k]);
        }
        printf("\n");

    }

}

int delete(int a[],int n)
{
    int k, pos;
    printf("Enter The Position At Which You Wish To Delete The Item\n");
    scanf("%d",&pos);
    if ((pos < 0) || (pos > n))
    {
        printf("Invalid Position Entered...Please Try Again\n");
        return 0;
    }

    printf("Initial Array Is Displayed Below\n");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    printf("\n");
    for(k=pos-1;k<n-1;k++)
    {
        a[k]=a[k+1];
    }
    printf("The Resultant Array Is Displayed Below\n");
    for(k=0;k<n-1;k++)
    {
        printf("%d\t",a[k]);
    }
    printf("\n");
}

void search(int a[], int n)
{
    int se,k,i;
    printf("Enter The Search Element\n");
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
            k=1;
    }
    if(k==1)
        printf("Search Element Present\n");
    else
        printf("Search Element Not Present\n");
    printf("\n");
}

void update(int a[], int n)
{
    int i,d,item,k,pos,itemone;
    d=0;
    printf("The Array Is Displayed Below\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Enter The Item To Be Updated\n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            d=1;
            pos = i;
            printf("Enter The New Item To Be Inserted\n");
            scanf("%d", &itemone);
            a[pos] = itemone;
            printf("The Resultant Array Is Displayed Below\n");
            for (k = 0; k < n; k++)
            {
                printf("%d\t", a[k]);
            }
            printf("\n");
        }

    }
    if(d!=1)
    {
        printf("Selected Element To Be Updated Isn't Available\n");
    }
        printf("\n");
}

