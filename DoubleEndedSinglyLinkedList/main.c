#include<stdio.h>
#include<stdlib.h>

int count;
struct node
{
    int data;
    struct node* link;
};
struct node* start;

void insert_front(int x)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    count++;

    if(start==NULL)
    {
        temp->data=x;
        temp->link=NULL;
        start=temp;
        printf("%d Inserted\n",x);
        return;
    }
    temp->data=x;
    temp->link=start;
    start=temp;
    printf("%d Inserted\n",x);
}

void insert_rear(int x)
{
    struct node* temp,* cur;
    temp=(struct node*)malloc(sizeof(struct node));
    count++;

    if(start==NULL)
    {
        temp->data=x;
        temp->link=NULL;
        start=temp;
        printf("%d Inserted\n",x);
        return;
    }

    cur=start;
    while(cur->link!=NULL)
        cur=cur->link;

    temp->data=x;
    temp->link=NULL;
    cur->link=temp;
    printf("%d Inserted\n",x);
}

void delete_front()
{
    struct node* second;
    if(start==NULL)
    {
        printf("Linked List Is Empty\n");
        return;
    }

    if(start->link==NULL)
    {
        printf("%d Deleted\n",start->data);
        free(start);
        start=NULL;
        count--;
        return;
    }
    second=start->link;
    printf("%d Deleted\n",start->data);
    free(start);
    start=second;
    count--;
}

void delete_rear()
{
    struct node* cur,* prev;
    if(start==NULL)
    {
        printf("Linked List Is Empty\n");
        return;
    }

    if(start->link==NULL)
    {
        printf("%d Deleted\n",start->data);
        free(start);
        start=NULL;
        count--;
        return;
    }
    cur=start;

    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    prev->link=NULL;
    printf("%d Deleted\n",cur->data);
    free(cur);
    count--;
}

void display()
{
    struct node* cur;

    if(start==NULL)
    {
        printf("Linked List Is Empty\n");
        return;
    }
    printf("Contents Of Linked List Are\n");
    if(start->link==NULL)
    {
        printf("%d\n",start->data);
        return;
    }
    cur=start;
    while(cur->link!=NULL)
    {
        printf("%d\n",cur->data);
        cur=cur->link;
    }
    printf("%d\n",cur->data);
}

void main()
{
    int item,choice;

    for(;;)
    {
        printf("Enter 1: Display\n");
        printf("Enter 2: Insert_Front\n");
        printf("Enter 3: Insert_Rear\n");
        printf("Enter 4: Delete_Front\n");
        printf("Enter 5: Delete_rear\n");
        printf("Enter 6: Exit\n");

        printf("Enter Your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: display();
                break;
            case 2: printf("Insert The Item To Be Inserted\n");
                scanf("%d",&item);
                insert_front(item);
                break;
            case 3: printf("Insert The Item To Be Inserted\n");
                scanf("%d",&item);
                insert_rear(item);
                break;
            case 4: delete_front();
                break;
            case 5: delete_rear();
                break;
            case 6: printf("Thankyou\n");
                exit(0);
            default:printf("Invalid Input\n");

        }
    }
}
