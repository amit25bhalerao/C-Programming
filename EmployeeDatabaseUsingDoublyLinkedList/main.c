#include<stdio.h>
#include<stdlib.h>

struct employee
{
    char name[50];
    char dep[20];
    char designation[20];
    char salary[20];
    struct employee* llink;
    struct employee* rlink;
};

typedef struct employee* NODE;

NODE getNode()
{
    char name[50],dep[20],designation[20],salary[20];
    NODE temp;
    temp=(NODE)malloc(sizeof(struct employee));

    if(temp==NULL)
    {
        printf("Insufficient Memory\n");
        return NULL;
    }

    printf("Enter The Employee Name\n");
    scanf("%s",temp->name);
    printf("Enter The Department Name\n");
    scanf("%s",temp->dep);
    printf("Enter The Designation\n");
    scanf("%s",temp->designation);
    printf("Enter The Salary\n");
    scanf("%s",temp->salary);

    return temp;
}

NODE insert_front(NODE first)
{
    NODE temp;
    temp=getNode();
    temp->llink=temp->rlink=NULL;

    if(first==NULL)
    {
        first=temp;
        printf("Employee Details Entered Successfully\n");
        return first;
    }

    temp->rlink=first;
    first->llink=temp;
    printf("Employee Details Entered Successfully\n");
    first=temp;
    return first;
}

NODE insert_rear(NODE first)
{
    NODE temp,cur;
    temp=getNode();
    temp->llink=temp->rlink=NULL;

    if(first==NULL)
    {
        first=temp;
        printf("Employee Details Entered Successfully\n");
        return first;
    }

    cur=first;
    while(cur->rlink!=NULL)
        cur=cur->rlink;

    cur->rlink=temp;
    temp->llink=cur;
    temp->rlink=NULL;
    printf("Employee Details Entered Successfully\n");
    return first;
}

NODE delete_front(NODE first)
{
    NODE sec;

    if(first==NULL)
    {
        printf("Employee Database Is Empty\n");
        return NULL;
    }

    if(first->rlink==NULL)
    {
        printf("Employee Details Deleted Successfully\n");
        free(first);
        return NULL;
    }

    sec=first->rlink;
    sec->llink=NULL;
    printf("Employee Details Deleted Successfully\n");
    first=sec;
    return first;
}

NODE delete_rear(NODE first)
{
    NODE cur,last;

    if(first==NULL)
    {
        printf("Employee Database Is Empty\n");
        return NULL;
    }

    if(first->rlink==NULL)
    {
        printf("Employee Details Deleted Successfully\n");
        free(first);
        return NULL;
    }

    cur=first;

    while(cur->rlink!=NULL)
        cur=cur->rlink;

    last=cur->llink;
    last->rlink=NULL;
    printf("Employee Details Deleted Successfully\n");
    free(cur);
    return first;
}

void display(NODE first)
{
    NODE cur;

    if (first == NULL)
    {
        printf("Employee Database Is Empty\n");
        return;
    }

    cur = first;
    printf("The Employee Database Details Are Displayed Below\n");

    while (cur->rlink != NULL)
    {
        printf("Employee_Name: %s\nDepartment: %s\nDesignation: %s\nSalary: %s\n", cur->name, cur->dep,
               cur->designation, cur->salary);
        cur = cur->rlink;
        printf("\n");
    }
    printf("Employee_Name: %s\nDepartment: %s\nDesignation: %s\nSalary: %s\n", cur->name, cur->dep, cur->designation,
           cur->salary);
}

void main()
{
    NODE first = NULL;
    int choice;

    for (;;)
    {
        printf("Enter 1: Display The Employee Database\n");
        printf("Enter 2: Insert Employee Details At Front\n");
        printf("Enter 3: Insert Employee Details At Rear\n");
        printf("Enter 4: Delete Employee Details At Front\n");
        printf("Enter 5: Delete Employee Details At Rear\n");
        printf("Enter 6: Exit\n");

        printf("Enter Your Choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(first);
                break;
            case 2:
                printf("Enter The Employee Details\n");
                first = insert_front(first);
                break;
            case 3:
                printf("Enter The Employee Details\n");
                first = insert_rear(first);
                break;
            case 4:
                first = delete_front(first);
                break;
            case 5:
                first = delete_rear(first);
                break;
            case 6:
                printf("Thank You :)\n");
                exit(0);
            default:
                printf("Invalid Input Entered..Please Try Again\n");
        }
    }
}
