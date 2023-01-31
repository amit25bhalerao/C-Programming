#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    char usn[20];
    char sem[20];
    char cgpa[20];
    struct student* link;
};

typedef struct student* NODE;

NODE getnode()
{
    char name[20],usn[20],sem[20],cgpa[20];
    NODE temp;
    temp=(NODE)malloc(sizeof(struct student));


    if(temp==NULL)
    {
        printf("Insufficient Memory\n");
        exit(0);
    }

    printf("Enter The Name Of The Student\n");
    scanf("%s",temp->name);
    printf("Enter The USN\n");
    scanf("%s",temp->usn);
    printf("Enter The Semester\n");
    scanf("%s",temp->sem);
    printf("Enter The CGPA\n");
    scanf("%s",temp->cgpa);

    return temp;

}

NODE insert_front(NODE first)
{
    NODE temp;
    temp=getnode();
    temp->link=NULL;

    if(first==NULL)
    {
        first=temp;
        printf("Student Details Entered Successfully\n");
        return first;
    }

    temp->link=first;
    first=temp;
    printf("Student Details Entered Successfully\n");
    return first;
}

NODE insert_rear(NODE first)
{
    NODE temp,cur;
    temp=getnode();
    temp->link=NULL;

    if(first==NULL)
    {
        first=temp;
        printf("Student Details Entered Successfully\n");
        return first;
    }

    if(first->link==NULL)
    {
        first->link=temp;
        printf("Student Details Entered Successfully\n");
        return first;
    }

    cur=first;

    while(cur->link!=NULL)
        cur=cur->link;

    cur->link=temp;
    printf("Student Details Entered Successfully\n");
    return first;
}

NODE delete_front(NODE first)
{
    NODE sec;

    if(first==NULL)
    {
        printf("No Records Present In Student Database\n");
        return NULL;
    }

    if(first->link==NULL)
    {
        printf("Student Details Deleted Successfully\n");
        free(first);
        return NULL;
    }

    sec=first->link;
    printf("Student Details Deleted Successfully\n");
    free(first);
    first=sec;
    return first;
}

NODE delete_rear(NODE first)
{
    NODE prev,cur;

    if(first==NULL)
    {
        printf("No Records Present In Student Database\n");
        return NULL;
    }

    if(first->link==NULL)
    {
        printf("Student Details Deleted Successfully\n");
        return NULL;
    }

    cur=first;

    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }

    printf("Student Details Deleted Successfully\n");
    free(cur);
    prev->link=NULL;
    return first;
}

void traverse(NODE first)
{
    NODE cur;

    if(first==NULL)
    {
        printf("No Records Present In Student Database\n");
        return;
    }

    cur=first;

    printf("Student Database Is Displayed Below\n\n");

    while(cur->link!=NULL)
    {
        printf("Name: %s\nUSN: %s\nSemester: %s\nCGPA: %s\n", cur->name,cur->usn,cur->sem, cur->cgpa);
        cur=cur->link;
        printf("\n");
    }
    printf("Name: %s\nUSN: %s\nSemester: %s\nCGPA: %s\n", cur->name,cur->usn,cur->sem, cur->cgpa);
    printf("\n");
}

void main()
{
    NODE first;
    first=NULL;
    int choice;

    while (1)
    {
        printf("Enter 1: Display\n");
        printf("Enter 2: Insert Student Details At Front\n");
        printf("Enter 3: Insert Student Details At Rear\n");
        printf("E nter 4: Delete Student Detail At Front\n");
        printf("Enter 5: Delete Student Detail At Rear\n");
        printf("Enter 6: Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                traverse(first);
                break;

            case 2:
                printf("Enter The Student Details\n");
                first=insert_front(first);
                break;
            case 3:
                printf("Enter The Student Details\n");
                first=insert_rear(first);
                break;
            case 4:
                first=delete_front(first);
                break;
            case 5:
                first=delete_rear(first);
                break;
            case 6:
                printf("Thank you :) :)\n");
                exit(0);
            default:
                printf("Invalid Input..Please Try Again :( :( \n");
        }
    }
}
















