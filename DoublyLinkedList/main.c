#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node* llink;
    struct node* rlink;
};
typedef struct node* NODE;
int count;

NODE getNode()
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));

    if(temp==NULL)
    {
        printf("Insufficient memory\n");
        return NULL;
    }
    return temp;
}

void display(NODE first)
{
    NODE cur;

    if(first==NULL)
    {
        printf("Doubly Linked List Is Empty\n");
        return;
    }
    cur=first;
    printf("The Contents Of Doubly Linked List Are\n");
    while(cur!=NULL)
    {
        printf("%d\n",cur->info);
        cur=cur->rlink;
    }
}

NODE insert_front(int item,NODE first)
{
    NODE temp;
    temp=getNode();

    temp->info=item;
    temp->llink=temp->rlink=NULL;

    if(first==NULL)
    {
        printf("%d Inserted\n",item);
        ++count;
        return temp;
    }

    temp->rlink=first;
    first->llink=temp;
    printf("%d Inserted\n",item);
    first=temp;
    ++count;
    return first;
}

NODE insert_rear(int item, NODE first)
{
    NODE temp,cur;
    temp=getNode();

    temp->info=item;
    temp->llink=temp->rlink=NULL;

    if(first==NULL)
    {
        printf("%d Inserted\n",item);
        ++count;
        return temp;
    }
    cur=first;
    while(cur->rlink!=NULL)
        cur=cur->rlink;

    cur->rlink=temp;
    temp->llink=cur;
    temp->rlink=NULL;
    printf("%d Inserted\n",item);
    ++count;
    return first;
}

NODE delete_front(NODE first)
{
    NODE sec;

    if(first==NULL)
    {
        printf("Doubly Linked List Is Already Empty\n");
        return NULL;
    }

    if(first->rlink==NULL)
    {
        printf("%d Deleted\n",first->info);
        free(first);
        count--;
        return NULL;
    }

    sec=first->rlink;
    sec->llink=NULL;
    printf("%d Deleted\n",first->info);
    first=sec;
    count--;
    return first;
}

NODE delete_rear(NODE first)
{
    NODE cur,last;

    if(first==NULL)
    {
        printf("Doubly Linked List Is Already Empty\n");
        return NULL;
    }

    if(first->rlink==NULL)
    {
        printf("%d Deleted\n",first->info);
        free(first);
        count--;
        return NULL;
    }

    cur=first;

    while(cur->rlink!=NULL)
        cur=cur->rlink;

    last=cur->llink;
    last->rlink=NULL;
    printf("%d Deleted\n",cur->info);
    free(cur);
    count--;
    return first;
}

void main()
{
    NODE first=NULL;
    int item,choice;

    for(;;)
    {
        printf("Enter 1: Display The Doubly Linked List\n");
        printf("Enter 2: Insert Item At Front\n");
        printf("Enter 3: Insert Item At Rear\n");
        printf("Enter 4: Delete Item At Front\n");
        printf("Enter 5: Delete Item At Rear\n");
        printf("Enter 6: Total Number Of Nodes\n");
        printf("Enter 7: Exit\n");

        printf("Enter Your Choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                display(first);
                break;
            case 2:
                printf("Enter The Item To Be Inserted\n");
                scanf("%d",&item);
                first=insert_front(item,first);
                break;
            case 3:
                printf("Enter The Item To Be Inserted\n");
                scanf("%d",&item);
                first=insert_rear(item,first);
                break;
            case 4:
                first=delete_front(first);
                break;
            case 5:
                first=delete_rear(first);
                break;
            case 6:
                printf("The Total Number Of Nodes Present In Doubly Linked List Are %d\n",count);
                break;
            case 7:
                printf("Thank You :)\n");
                exit(0);
            default:
                printf("Invalid Input Entered..Please Try Again\n");
        }
    }
}