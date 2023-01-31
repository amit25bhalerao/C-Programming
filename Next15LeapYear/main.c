#include<stdio.h>

int leapyear(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        return 1;
    else
        return 0;
}

void main()
{
   int i,temp,temp1,year;

   printf("\n");
   printf("Enter A Year:");
   scanf("%d",&year);
   temp=1;
   temp1=year;

   printf("The Next 15 Leap Years From %d Are Listed Below:\n", year);

   for(i=year;i<=(year+year);i++)
   {
       if(temp1==i)
           continue;
       if (leapyear(i) == 1)
       {
           printf("%d\n", i);
           temp = temp + 1;
           if (temp > 15)
               return;
       }
   }
}
