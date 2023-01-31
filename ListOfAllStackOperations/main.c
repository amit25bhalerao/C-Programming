#include<stdio.h>
#include<stdlib.h>


int *stack, n, ele;
int top=-1;
void create();
void push();
void pop();
void traverse();
void palindrome();

void main()
{
    int c;
    for(;;)
    {
        printf("Enter 1: Create Stack\n");
        printf("Enter 2: Insert Element In Stack\n");
        printf("Enter 3: Delete Element From Stack\n");
        printf("Enter 4: Traverse\n");
        printf("Enter 5: Palindrome Check\n");
        printf("Enter 6: Exit\n\n");

        printf("Enter Your Choice\n");
        scanf("%d",&c);

        switch(c)
        {
            case 1: create();
                break;
            case 2: push();
                break;
            case 3: pop();
                break;
            case 4: traverse();
                break;
            case 5: palindrome();
                break;
            case 6: printf("Thank you :) :) :)\n\n");
                exit(0);
            default:printf("Invalid Input..Please Try Again :( :( :(\n\n");
        }
    }
}

void create()
{
    printf("Enter The Size Of The Stack\n");
    scanf("%d",&n);
    stack=(int*)calloc(n,sizeof(int));
    if(stack==NULL)
        printf("Insufficient Memory\n");
    printf("Memory Created Successfully\n\n");
}


void push()
{

    if(top==(n-1))
    {
        printf("Stack Overflow\n\n");
        return;
    }

    printf("Enter The Element To Be Inserted\n");
    scanf("%d",&ele);

    ++top;
    stack[top]=ele;
    printf("%d Inserted Successfully\n\n",ele);
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n\n");
        return;
    }
    printf("%d Is Removed From The Stack\n\n", stack[top--]);
}


void traverse()
{
    int i;

    if(top==-1)
    {
        printf("Stack Is Empty\n");
        return;
    }
    printf("The ELements In The Stacks Are Displatyed Below\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }

    printf("\n");
}


void palindrome()
{
    int top=-1;
    int i,len,element;
    int k=0;
    char string[100];
    char* stack1;

    printf("Enter The String\n");
    scanf("%s",string);

    for(i=0;string[i]!='\0';i++)
    {
        k=k+1;
    }

    stack1=(char*)calloc(k,sizeof(char));

    for(i=0;string[i]!='\0';i++)
    {
        element=string[i];
        stack1[++top]=element;
    }

    for(i=0;string[i]!='\0';i++)
    {
        if(stack1[top--]!=string[i])
        {
            printf("%s Isn't A Palindrome String\n\n", string);
            return;
        }
    }

    printf("%s Is A Palindrome String\n\n", string);
}

