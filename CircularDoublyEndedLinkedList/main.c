#include<stdio.h>
#include<stdlib.h>

int count;

struct node
{
    int info;
    struct node* llink;
    struct node* rlink;
};
typedef struct node* NODE;

NODE getNode()
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));

    if(temp==NULL)
    {
        printf("Insufficient Memory\n");
        exit(0);
    }
    return temp;
}

NODE insert_front(int item,NODE first)
{
    NODE temp,cur;
    temp=getNode();

    temp->info=item;
    temp->llink=temp->rlink=temp;

    if(first==NULL)
    {
       first=temp;
       printf("%d Inserted\n",item);
       ++count;
       return first;
    }

    if(first->rlink==first)
    {
        temp->rlink=first;
        first->llink=temp;
        temp->info=item;
        printf("%d Inserted\n",item);
        first->rlink=temp;
        temp->llink=first;
        first=temp;
        ++count;
        return first;
    }

    cur=first;

    while(cur->rlink!=first)
        cur=cur->rlink;

    cur->rlink=temp;
    temp->info=item;
    temp->rlink=first;
    temp->llink=cur;
    first->llink=temp;
    first=temp;
    ++count;
    return first;
}

NODE insert_rear(int item,NODE first)
{

    NODE temp,last;
    temp=getNode();

    temp->info=item;
    temp->llink=temp->rlink=temp;

    if(first==NULL)
    {
        first=temp;
        ++count;
        printf("%d Inserted\n",item);
        return first;
    }

    if(first->rlink==first)
    {
        temp->rlink=first;
        first->llink=temp;
        temp->info=item;
        printf("%d Inserted\n",item);
        first->rlink=temp;
        temp->llink=first;
        first=temp;
        ++count;
        return first;
    }
    last=first->llink;
    last->rlink=temp;
    temp->llink=last;
    temp->info=item;
    printf("%d Inserted\n",item);
    count++;
    first->llink=temp;
    temp->rlink=first;
    return first;
}

NODE delete_front(NODE first)
{
    NODE sec,last;
    if(first==NULL)
    {
        printf("Circular Doubly Linked List Is Empty\n");
        return NULL;
    }

    if(first->rlink==first)
    {
        printf("%d Deleted\n",first->info);
        free(first);
        count--;
        return NULL;
    }
    last=first->llink;
    sec=first->rlink;
    sec->llink=last;
    last->rlink=sec;
    printf("%d Deleted\n",first->info);
    free(first);
    count--;
    first=sec;
    return first;
}

NODE delete_rear(NODE first)
{
    NODE last;
    if(first==NULL)
    {
        printf("Circular Doubly Linked List Is Empty\n");
        return NULL;
    }
    if(first->rlink==first)
    {
        printf("%d Deleted\n",first->info);
        free(first);
        count--;
        return NULL;
    }
    last=first->llink->llink;
    printf("%d Deleted\n",first->llink->info);
    last->rlink=first;
    free(first->llink);
    first->llink=last;
    count--;
    return first;
}

void display(NODE first)
{
    NODE cur;
    if(first==NULL)
    {
        printf("Circular Doubly Linked List Is Empty\n");
        return;
    }

    printf("The Contents Of Circular Doubly Linked List Are Displayed Below\n");
    if(first->rlink==first)
    {
        printf("%d\n",first->info);
        return;
    }

    cur=first;
    while(cur->rlink!=first)
    {
        printf("%d\n",cur->info);
        cur=cur->rlink;
    }
    printf("%d\n",cur->info);

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













