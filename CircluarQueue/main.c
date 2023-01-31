#include<stdio.h>
#include<stdlib.h>
#define QUEUESIZE 5

int f,r,q[QUEUESIZE],count;

void insert(int item)
{
    if(count==QUEUESIZE)
    {
        printf("Queue Is Full\n");
        return;
    }

    r=(r+1)%QUEUESIZE;
    q[r]=item;
    ++count;
    printf("%d Inserted\n",item);
}

void delete()
{
    if(count==0)
    {
        printf("Queue Is Empty\n");
        return;
    }

    printf("%d Deleted\n",q[f]);

    f=(f+1)%QUEUESIZE;
    count--;
}

void display()
{
    int i;
    if(count==0)
    {
        printf("Queue Is Empty\n");
        return;
    }
    printf("The Queue Contents Are Displayed Below\n");

    if(f<r)
    {
        for(i=f;i<=r;i++)
            printf("%d ",q[i]);
    }
    else
    {
        for(i=f;i<=count;i++)
            printf("%d ",q[i]);
    }
    printf("\n");
}

void main()
{
    f=0;r=-1;
    int c,item;

    for(;;)
    {
        printf("Enter 1: Insert Element Into Circular Queue\n");
        printf("Enter 2: Delete Element From The Circular Queue\n");
        printf("Enter 3: Traverse\n");
        printf("Enter 4: Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d",&c);

        switch(c)
        {
            case 1:
                printf("Enter The Item To Be Inserted\n");
                scanf("%d",&item);
                insert(item);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Thank You\n");
                exit(0);
            default:
                printf("Invalid Input\n");
        }
    }
}