#include<stdio.h>
#include<stdlib.h>

int count;

struct node
{
    int data;
    struct node* link;
};

struct node* start=NULL;

void insert_at_front(int x)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    count++;

    if(start==NULL)
    {
        start=temp;
        temp->data=x;
        temp->link=NULL;
        return;
    }

    temp->data=x;
    temp->link=start;
    start=temp;
}

void delete_at_front()
{
    struct node* temp;

    if(start==NULL)
    {
        printf("The List Is Already Empty\n");
        return;
    }

    printf("Top Most Element %d Of Stack Deleted\n",start->data);
    temp=start->link;
    free(start);
    start=temp;
    count--;
}

void traverse()
{
    struct node* cur;
    if(start==NULL)
    {
        printf("The Stack Is Empty\n");
        return;
    }

    printf("The Contents Of Stack Are\n");
    cur=start;

    while(cur->link!=NULL)
    {
        printf("%d ",cur->data);
        cur=cur->link;
    }
    printf("%d ",cur->data);
    printf("\n");
}

void main()
{
    int choice,item,elem;

    while(1)
    {
        printf("Enter 1: Display\n");
        printf("Enter 2: Insert Element Into Stack\n");
        printf("Enter 3: Delete Element From Stack\n");
        printf("Enter 4: Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                traverse();
                break;
            case 2:
                printf("Enter The Item To Be Inserted\n");
                scanf("%d",&item);
                insert_at_front(item);
                break;
            case 3:
                delete_at_front();
                break;
            case 4:
                printf("Thank you :) :)\n");
                exit(0);
            default:
                printf("Invalid Input..Please Try Again :( :( \n");
        }
    }
}
