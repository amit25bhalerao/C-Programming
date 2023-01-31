#include<stdio.h>

void main()
{
     int digit,sum,temp,num;

     printf("\nEnter A Number\n");
     scanf("%d",&num);

     temp=num;

     while(num!=0)
     {
         digit=num%10;
         sum=sum+digit;
         num=num/10;
     }
     if((temp%sum)==0)
         printf("%d Is Harshad Number\n",temp);
     else
         printf("%d Is Not A Harshad Number\n",temp);
}