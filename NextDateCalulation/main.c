#include<stdio.h>
#include<stdlib.h>

void  main()
{
    int  date, month, year, date1, month1, year1;

    printf("\n");
    printf("Enter Your Desired Date In The Given Format - \'Date-Month-year\'\n");

    printf("Date:");
    scanf("%d",&date);
    printf("Month:");
    scanf("%d",&month);
    printf("Year:");
    scanf("%d",&year);

    if(month>12)
    {
        printf("Invalid Input\n");
        return;
    }

    printf("\n");

    if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10))
    {
        if (date > 31)
        {
            printf("Invalid Date\n");
            return;
        }
        if(date==31)
        {
            month1=month+1;
            date1=1;
            year1=year;
            printf("Input Date\t\t\t\t\tOutput Date\n");
            printf("%d-%d-%d",date,month,year);
            printf("\t\t\t\t\t");
            printf("%d-%d-%d",date1,month1,year1);
            return;
        }
        month1=month;
        date1=date+1;
        year1=year;
        printf("Input Date\t\t\t\t\tOutput Date\n");
        printf("%d-%d-%d",date,month,year);
        printf("\t\t\t\t\t");
        printf("%d-%d-%d",date1,month1,year1);
        return;
    }


    if((month==4)||(month==6)||(month==9)||(month==11))
    {
        if (date > 30)
        {
            printf("Invalid Date\n");
            return;
        }
        if (date == 30)
        {
            month1 = month + 1;
            date1 = 1;
            year1 = year;
            printf("Input Date\t\t\t\t\tOutput Date\n");
            printf("%d-%d-%d", date, month, year);
            printf("\t\t\t\t\t");
            printf("%d-%d-%d", date1, month1, year1);
            return;
        }
        month1 = month;
        date1 = date + 1;
        year1 = year;
        printf("Input Date\t\t\t\t\tOutput Date\n");
        printf("%d-%d-%d", date, month, year);
        printf("\t\t\t\t\t");
        printf("%d-%d-%d", date1, month1, year1);
        return;
    }


    if(month==12)
    {
        if (date > 31)
        {
            printf("Invalid Date\n");
            return;
        }
        if (date == 31)
        {
            month1 = 1;
            date1 = 1;
            year1 = year + 1;
            printf("Input Date\t\t\t\t\tOutput Date\n");
            printf("%d-%d-%d", date, month, year);
            printf("\t\t\t\t\t");
            printf("%d-%d-%d", date1, month1, year1);
            return;
        }
        month1 = month;
        date1 = date + 1;
        year1 = year;
        printf("Input Date\t\t\t\t\tOutput Date\n");
        printf("%d-%d-%d", date, month, year);
        printf("\t\t\t\t\t");
        printf("%d-%d-%d", date1, month1, year1);
        return;
    }


    if(month==2)
    {
        if(((year%4)==0)&&((year%100)!=0)||((year%400)==0))
        {
            if (date > 29)
            {
                printf("Invalid Date\n");
                return;
            }
            if (date == 29)
            {
                month1 = month+1;
                date1 = 1;
                year1 = year;
                printf("Input Date\t\t\t\t\tOutput Date\n");
                printf("%d-%d-%d", date, month, year);
                printf("\t\t\t\t\t");
                printf("%d-%d-%d", date1, month1, year1);
                return;
            }
            month1 = month;
            date1 = date + 1;
            year1 = year;
            printf("Input Date\t\t\t\t\tOutput Date\n");
            printf("%d-%d-%d", date, month, year);
            printf("\t\t\t\t\t");
            printf("%d-%d-%d", date1, month1, year1);
            return;

        }

        if (date > 28)
        {
            printf("Invalid Date\n");
            return;
        }
        if (date == 28)
        {
            month1 = month+1;
            date1 = 1;
            year1 = year;
            printf("Input Date\t\t\t\t\tOutput Date\n");
            printf("%d-%d-%d", date, month, year);
            printf("\t\t\t\t\t");
            printf("%d-%d-%d", date1, month1, year1);
            return;
        }
        month1 = month;
        date1 = date + 1;
        year1 = year;
        printf("Input Date\t\t\t\t\tOutput Date\n");
        printf("%d-%d-%d", date, month, year);
        printf("\t\t\t\t\t");
        printf("%d-%d-%d", date1, month1, year1);
        return;
    }
}
