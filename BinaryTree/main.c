#include<stdio.h>
#include<stdlib.h>

int count,count1;

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
        return NULL;
    }

    return temp;
}

void in_order_display(NODE root)
{
    if(root==NULL)
        return;

    in_order_display(root->llink);

    printf("%d\n",root->info);

    in_order_display(root->rlink);
}

void pre_order_display(NODE root)
{
    if(root==NULL)
        return;

    printf("%d\n",root->info);

    pre_order_display(root->llink);

    pre_order_display(root->rlink);
}

void post_order_display(NODE root)
{
    if(root==NULL)
        return;

    post_order_display(root->llink);

    post_order_display(root->rlink);

    printf("%d\n",root->info);
}

NODE insert_node(int item,NODE root)
{
    NODE temp,cur,prev;

    temp=getNode();

    temp->info=item;
    temp->llink=temp->rlink=NULL;

    if(root==NULL)
    {
        root=temp;
        printf("%d Node Created\n",item);
        return root;
    }

    cur=root;

    while(cur)
    {
        prev=cur;
        if(item<=cur->info)
            cur=cur->llink;
        else
            cur=cur->rlink;
    }

    if(item<=prev->info)
        prev->llink=temp;
    else
        prev->rlink=temp;

    printf("%d Node Created\n",item);
    return root;
}

void count_node(NODE root)
{
    if(root==NULL)
        return;

    count_node(root->llink);

    count++;

    count_node(root->rlink);
}

void count_leaf(NODE root)
{
    if(root==NULL)
        return;

    count_leaf(root->llink);

    if(((root->llink)==NULL)&&((root->rlink)==NULL))
        count1++;

    count_leaf(root->llink);
}

void search(int item,NODE root)
{
    NODE cur;

    if(root==NULL)
    {
        printf("Empty Tree..Item Not Found\n");
        return;
    }

    cur=root;

    while(cur!=NULL)
    {
        if(item==cur->info)
            break;

        if(item<=cur->info)
            cur=cur->llink;
        else
            cur=cur->rlink;
    }

    if(cur==NULL)
    {
        printf("%d Not Found In The Binary Tree\n",item);
        return;
    }
    printf("%d Found In The Binary Tree\n",item);
}

void deleteTree(NODE root)
{
    if (root==NULL)
        return;

    deleteTree(root->llink);

    deleteTree(root->rlink);

    printf("Deleting node: %d\n", root->info);
    free(root);

}

void main()
{
    NODE root;
    int item,choice;
    root=NULL;

    for(;;)
    {
        printf("Enter 1: Insert Node Into Binary Tree\n");
        printf("Enter 2: In Order Display Of Binary Tree\n");
        printf("Enter 3: Pre Order Display Of Binary Tree\n");
        printf("Enter 4: Post Order Display Of Binary Tree\n");
        printf("Enter 5: Count Number Of Nodes\n");
        printf("Enter 6: Count Number Of Leafs\n");
        printf("Enter 7: Search For An Item In The Binary Tree\n");
        printf("Enter 8: Delete The Whole Tree\n");
        printf("Enter 9: Exit\n");

        printf("Enter Your Choice\n");
        scanf("%d",& choice);

        switch(choice)
        {
            case 1:
                printf("Enter The Item To be Inserted\n");
                scanf("%d",&item);
                root=insert_node(item,root);
                break;
            case 2:
                if(root==NULL)
                {
                    printf("Empty Tree\n");
                    break;
                }
                in_order_display(root);
                break;
            case 3:
                if(root==NULL)
                {
                    printf("Empty Tree\n");
                    break;
                }
                pre_order_display(root);
                break;
            case 4:
                if(root==NULL)
                {
                    printf("Empty Tree\n");
                    break;
                }
                post_order_display(root);
                break;
            case 5:
                if(root==NULL)
                {
                    printf("Empty Tree\n");
                    break;
                }
                count_node(root);
                printf("Total Number Of Nodes Are %d\n",count);
                break;
            case 6:
                if(root==NULL)
                {
                    printf("Empty Tree\n");
                    break;
                }
                count_leaf(root);
                printf("Total Number Of Leaves Are %d\n",count1);
                break;
            case 7:
                printf("Enter The Item To Be Searched\n");
                scanf("%d",&item);
                search(item,root);
                break;
            case 8:
                if(root==NULL)
                {
                    printf("Empty Tree\n");
                    break;
                }
                deleteTree(root);
                root=NULL;
                break;
            case 9:
                printf("Thank You\n");
                exit(0);
            default:
                printf("Invalid Input Entered...Please Try Again\n");
        }
    }
}














