#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,temp,sum,digit;

    printf("\nEnter A Number\n");
    scanf("%d",&n);

    temp=n;
    sum=0;

    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }

    if(temp==sum)
        printf("%d Is An Armstrong Number\n",temp);
    else
        printf("%d Isnt An Armstrong Number\n",temp);

    exit(0);
}