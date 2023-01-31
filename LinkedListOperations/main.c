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

void insert_at_rear(int y)
{
    struct node* temp,* cur;
    temp=(struct node*)malloc(sizeof(struct node));
    count++;

    if(start==NULL)
    {
        start=temp;
        temp->data=y;
        temp->link=NULL;
        return;
    }

    cur=start;

    while(cur->link!=NULL)
        cur=cur->link;

    cur->link=temp;
    temp->data=y;
    temp->link=NULL;
}

void traverse()
{
    struct node* cur;
    if(start==NULL)
    {
        printf("The List Is Empty\n");
        return;
    }

    cur=start;

    while(cur->link!=NULL)
    {
        printf("%d ",cur->data);
        cur=cur->link;
    }
    printf("%d ",cur->data);
    printf("\n");
}

void delete_at_front()
{
    struct node* temp;

    if(start==NULL)
    {
        printf("The List Is Already Empty\n");
        return;
    }

    printf("First Node Deleted Successfully\n");
    temp=start->link;
    free(start);
    start=temp;
    count--;
}

void delete_at_rear()
{
    struct node* cur,* prev;

    if(start==NULL)
    {
        printf("The List Is Already Empty\n");
        return;
    }

    printf("Last Node Deleted Successfully\n");

    cur=start;
    prev=NULL;

    if(start->link==NULL)
    {
        free(start);
        start=NULL;
        count=0;
        return;
    }

    while(cur->link!=NULL)
    {
         prev=cur;
         cur=cur->link;
    }
    free(cur);
    count--;
    prev->link=NULL;
}

void search(int z)
{
    struct node* cur;

    if(start==NULL)
    {
        printf("The List Is Already Empty..No Item Can Be Searched\n");
        return;
    }
    if(start->link==NULL)
    {
        if(start->data==z)
            printf("%d Element Is Present\n",z);
        else
            printf("%d Element Isnt Present\n",z);
        return;
    }

    cur=start;

    while(cur!=NULL)
    {
        if(cur->data==z)
            break;
        cur=cur->link;
    }
    if(cur==NULL)
    {
        printf("%d Element Isnt Present\n",z);
        return;
    }
    printf("%d Element Is Present\n",z);
}

void delete_node(int item)
{
    struct node* cur,* prev,* second;

    if(start==NULL)
    {
        printf("List Is Already Empty\n");
        return;
    }

    prev=NULL;
    cur=start;

    while(cur!=NULL)
    {
        if(cur->data==item)
            break;
        prev=cur;
        cur=cur->link;
    }

    if(cur==NULL)
    {
        printf("Element To Be Deleted Not Found In The List\n");
        return;
    }

    if(item==start->data)
    {
        second=start->link;
        free(start);
        start=second;
        printf("Specific Node Deleted Successfully\n");
        count--;
        return;
    }

    prev->link=cur->link;
    free(cur);
    count--;
    printf("Specific Node Deleted Successfully\n");
}

void insert_after_pos(int item, int elem)
{
    struct node* temp,*cur;
    temp=(struct node*)malloc(sizeof(struct node));
    count++;

    cur=start;

    if(start==NULL)
    {
        printf("%d Cant Be Inserted After %d As %d Doesnt Exists In The List\n",item,elem,elem);
        return;
    }

    while(cur!=NULL)
    {
        if(cur->data==elem)
            break;
        cur=cur->link;
    }

    if(cur==NULL)
    {
        printf("%d Cant Be Inserted After %d As %d Doesnt Exists In The List\n",item,elem,elem);
        return;
    }
    temp->link=cur->link;
    temp->data=item;
    cur->link=temp;
    printf("%d Inserted After %d In The List\n",item,elem);
    count++;
}

void insert_before_pos(int item, int elem)
{
    struct node* temp,* prev,*cur;
    temp=(struct node*)malloc(sizeof(struct node));

    if(start==NULL)
    {
        printf("%d Cant Be Inserted Before %d As %d Doesnt Exists In The List\n",item,elem,elem);
        return;
    }

    prev=NULL;
    cur=start;

    while(cur!=NULL)
    {
        if(cur->data==elem)
            break;
        prev=cur;
        cur=cur->link;
    }

    if(cur==NULL)
    {
        printf("%d Cant Be Inserted Before %d As %d Doesnt Exists In The List\n",item,elem,elem);
        return;
    }

    if(elem==start->data)
    {
        temp->link=start;
        temp->data=item;
        start=temp;
        printf("%d Inserted Before %d In The List\n",item,elem);
        count++;
        return;
    }

    temp->link=cur;
    prev->link=temp;
    temp->data=item;
    printf("%d Inserted Before %d In The List\n",item,elem);
    count++;
}

void main()
{
    int choice,item,elem;

    while(1)
    {
        printf("Enter 1: Display\n");
        printf("Enter 2: Insert At Front\n");
        printf("Enter 3: Insert At Rear\n");
        printf("Enter 4: Delete At Front\n");
        printf("Enter 5: Delete At Rear\n");
        printf("Enter 6: Count Total Number Of Nodes\n");
        printf("Enter 7: Search For An Element In The List\n");
        printf("Enter 8: Delete A Specific Element In The List\n");
        printf("Enter 9: Insert Element After A Specific Item In The List\n");
        printf("Enter 10: Insert Element Before A Specific item In The List\n");
        printf("Enter 11: Exit\n");
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
                printf("Enter The Item To Be Inserted\n");
                scanf("%d",&item);
                insert_at_rear(item);
                break;
            case 4:
                delete_at_front();
                break;
            case 5:
                delete_at_rear();
                break;
            case 6:
                printf("%d Are/Is The Total Number Of Nodes In The List\n",count);
                break;
            case 7:
                printf("Enter The Element To Be Searched\n");
                scanf("%d",&item);
                search(item);
                break;
            case 8:
                printf("Enter The Element To Be Deleted\n");
                scanf("%d",&item);
                delete_node(item);
                break;
            case 9:
                printf("Enter The Element To Be Inserted\n");
                scanf("%d",&item);
                printf("Enter The Item In List After Which You Wish To Enter The Element\n");
                scanf("%d",&elem);
                insert_after_pos(item,elem);
                break;
            case 10:
                printf("Enter The Element To Be Inserted\n");
                scanf("%d",&item);
                printf("Enter The Item In List Before Which You Wish To Enter The Element\n");
                scanf("%d",&elem);
                insert_before_pos(item,elem);
                break;
            case 11:
                printf("Thank you :) :)\n");
                exit(0);
            default:
                printf("Invalid Input..Please Try Again :( :( \n");
        }
    }
}
