#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>

double evaluate(char postfix[])
{
    double stack[100],op1,op2;
    char symbol;
    int i,top=-1;
    for(i=0; postfix[i]!='\0';i++)
    {
        symbol=postfix[i];

        switch(symbol)
        {
            case '+':
                op2=stack[top--];
                op1=stack[top--];
                stack[++top]=op1+op2;
                break;

            case '-':
                op2=stack[top--];
                op1=stack[top--];
                stack[++top]=op1-op2;
                break;

            case '*':
                op2=stack[top--];
                op1=stack[top--];
                stack[++top]=op1*op2;
                break;

            case '/':
                op2=stack[top--];
                op1=stack[top--];
                stack[++top]=op1/op2;
                break;

            case '^':
            case '$':
                op2=stack[top--];
                op1=stack[top--];
                stack[++top]=pow(op1,op2);
                break;

            default:
                stack[++top]=symbol-48;
        }
    }
    return stack[top];
}

void main()
{
    double result;
    char postfix[100];

    printf("Enter The Postfix Expression\n");
    scanf("%s",postfix);

    result=evaluate(postfix);

    printf("The Result Of Given Postfix Expression %s is %lf", postfix, result);

    exit(0);
}