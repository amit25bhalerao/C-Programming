#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};
int count;
struct node* start;

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

void display()
{
    struct node* cur;
    cur=start;

    if(cur==NULL)
    {
        printf("Empty List\n");
        return;
    }
    printf("The Contents Of List Are\n");
    while(cur!=NULL)
    {
        printf("%d\n",cur->data);
        cur=cur->link;
    }
}


void main()
{
    int item,choice;

    for(;;)
    {
        printf("Enter 1: Display\n");
        printf("Enter 2: Insert_Rear\n");
        printf("Enter 3: Delete_Front\n");
        printf("Enter 4: Count The Number Of Nodes\n");
        printf("Enter 5: Exit\n");

        printf("Enter Your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: display();
                break;
            case 2: printf("Insert The Item To Be Inserted\n");
                scanf("%d",&item);
                insert_rear(item);
                break;
            case 3: delete_front();
                break;
            case 4:printf("Total Number Of Nodes Are %d\n",count);
                break;
            case 5: printf("Thank You\n");
                exit(0);
            default:printf("Invalid Input\n");
        }
    }
}
