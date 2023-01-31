#include<stdio.h>
#include<stdlib.h>

int count;

struct node
{
    int data;
    struct node* link;
};

struct node* start1=NULL;
struct node* start2=NULL;

void insert_firstlinkedlist(int x)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    count++;

    if(start1==NULL)
    {
        start1=temp;
        temp->data=x;
        temp->link=NULL;
        return;
    }

    temp->data=x;
    temp->link=start1;
    start1=temp;
}

void insert_secondlinkedlist(int x)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    count++;

    if(start2==NULL)
    {
        start2=temp;
        temp->data=x;
        temp->link=NULL;
        return;
    }

    temp->data=x;
    temp->link=start2;
    start2=temp;
}

void traverseconcatenatedlist()
{
    struct node* cur1,* cur2;
    cur1=start1;
    cur2=start2;
    if(start1==NULL)
    {
        if(start2==NULL)
        {
            printf("Both First Linked List And Second Linked List Are Empty\n");
            return;
        }
        printf("The Concatenated List Is Displayed Below\n");

        cur2=start2;

        while(cur2->link!=NULL)
        {
            printf("%d ",cur2->data);
            cur2=cur2->link;
        }
        printf("%d ",cur2->data);
        printf("\n");
        return;
    }

    if(start2==NULL)
    {
        if(start1==NULL)
        {
            printf("Both First Linked List And Second Linked List Are Empty\n");
            return;
        }
        printf("The Concatenated List Is Displayed Below\n");

        cur1=start1;

        while(cur1->link!=NULL)
        {
            printf("%d ",cur1->data);
            cur1=cur1->link;
        }
        printf("%d ",cur1->data);
        printf("\n");
        return;
    }
    printf("The Concatenated List Is Displayed Below\n");

    cur1=start1;
    cur2=start2;

    while(cur1->link!=NULL)
        cur1=cur1->link;

    cur1->link=cur2;

    cur1=start1;
    while(cur1->link!=NULL)
    {
        printf("%d ",cur1->data);
        cur1=cur1->link;
    }
    printf("%d ",cur1->data);
    printf("\n");
}

void main()
{
    int choice,item;

    while(1)
    {
        printf("Enter 1: Display Concatenated Linked Lists\n");
        printf("Enter 2: Insert Element For First Linked List\n");
        printf("Enter 3: Insert Element For Second Linked List\n");
        printf("Enter 4: Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                traverseconcatenatedlist();
                break;
            case 2:
                printf("Enter The Item To Be Inserted\n");
                scanf("%d",&item);
                insert_firstlinkedlist(item);
                break;
            case 3:
                printf("Enter The Item To Be Inserted\n");
                scanf("%d",&item);
                insert_secondlinkedlist(item);
                break;
            case 4:
                printf("Thank you :) :)\n");
                exit(0);
            default:
                printf("Invalid Input..Please Try Again :( :( \n");
        }
    }
}
