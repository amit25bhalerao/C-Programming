#include <stdio.h>
#include<string.h>

void main()
{
    int hh,mm,ss;
    char str[5];

    printf("Enter The 12Hr Time Format As HH MM SS AM or HH MM SS PM\n");
    scanf("%d %d %d %s", &hh, &mm, &ss, str);

    if((hh<0)||(hh>12))
    {
        printf("Invalid Time Format..Please Try Again..");
        return;
    }
    if((ss<0)||(ss>59))
    {
        printf("Invalid Time Format..Please Try Again..");
        return;
    }
    if((mm<0)||(mm>59))
    {
        printf("Invalid Time Format..Please Try Again..");
        return;
    }

    if((strcmp(str,"AM")==0)||(strcmp(str,"am")==0)||((strcmp(str,"Am")==0)||(strcmp(str,"aM")==0)))
    {
        if(hh==12)
            hh=00;
        printf("The Given Time In 24Hr Format Is Represented As Shown Below\n");
        printf("%0.2d %0.2d %0.2d",hh ,mm, ss);
        return;
    }
    else if((strcmp(str,"PM")==0)||(strcmp(str,"pm")==0)||((strcmp(str,"Pm")==0)||(strcmp(str,"pM")==0)))
    {
        if(hh==12)
        {
            hh=12;
        }
        else
        {
            hh=12+hh;
        }
        printf("The Given Time In 24Hr Format Is Represented As Shown Below\n");
        printf("%0.2d %0.2d %0.2d",hh ,mm, ss);
        return;
    }
    else
    {
        printf("Invalid Input..Please Try Again");
        return;
    }
}