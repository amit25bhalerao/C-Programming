#include<stdio.h>
#include<stdlib.h>

struct employee
{
    char ename[50];
    int esal;
    int eage;
};

void main()
{
    struct employee* ptr;
    int i, n;
    printf("Enter The Total Number Of Employees\n");
    scanf("%d", &n);
    ptr = (struct employee*) malloc(sizeof(struct employee));
    if(ptr==NULL)
    {
        printf("Memory Not Allocated\n");
        return;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter The Name Of The Employee\n");
        scanf("%s", (ptr+i)->ename);
        printf("Enter The Age Of Employee\n");
        scanf("%d", &(ptr+i)->eage);
        printf("Enter The Salary Of Employee\n");
        scanf("%d", &(ptr+i)->esal);
    }
    for (i = 0; i < n; i++)
    {
        printf("\tName Of The Employee: %s\t", (ptr+i)->ename);
        printf("Age Of The Employee: %d\t", (ptr+i)->eage);
        printf("Salary Of The Employee: %d\n", (ptr+i)->esal);
    }
}