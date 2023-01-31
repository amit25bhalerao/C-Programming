#include<stdio.h>
#include<stdlib.h>

int* queue,n;
int front = 0;
int rear = 0;

void create()
{
    queue=(int*)malloc(n*sizeof(int));
    if(queue==NULL)
    {
        printf("Insufficient Memory\n\n");
        return;
    }
    printf("Queue Created Successfully\n\n");
}

void insert()
{
    if(rear==n)
    {
        printf("Queue Is Full\n\n");
        return;
    }
    else
    {
        int ele;
        printf("Enter The Item To Be Inserted\n");
        scanf("%d",&ele);
        queue[rear]=ele;
        rear++;
        printf("\n");
    }
}

void delete()
{
    if(front==rear)
    {
        printf("Queue Is Empty\n\n");
        return;
    }
    else
    {
        int i;
        printf("%d Element Removed Successfully\n\n",queue[front]);
        for(i=0;i<rear-1;i++)
        {
            queue[i]=queue[i+1];
        }
        rear--;
        printf("\n");
    }
}

void display()
{
    if(front==rear)
    {
        printf("Queue Is Empty\n\n");
        return;
    }
    else
    {
        int i;
        for(i=front;i<rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n\n");
    }
}

void main()
{
    int choice;
    printf("Welcome To Queue Operation Portal\n");
    for(;;)
    {
        printf("Enter 1: Create Queue\n");
        printf("Enter 2: Insert An Item Into The Queue\n");
        printf("Enter 3: Remove An Item From Queue\n");
        printf("Enter 4: Display Queue\n");
        printf("Enter 5: Exit\n\n");

        printf("Enter Your Choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter The Size Of The Queue\n");
                scanf("%d",&n);
                create();
                break;
            case 2:
                insert();
                break;
            case 3:
                delete();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Thank you :) :) :)\n\n");
                exit(0);
            default:
                printf("Invalid Input..Please Try Again\n\n");
        }
    }
}