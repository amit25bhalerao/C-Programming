#include<stdio.h>
#include<stdlib.h>

void length(char str[])
{
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
        count++;

    printf("The Length Of Given String %s is %d \n",str,count);
}

void concatenate(char str1[],char str2[])
{
    int i=0,j=0;

    while(str1[i]!='\0')
        i++;
    while(str2[j]!='\0')
        str1[i++]=str2[j++];
    str1[i]='\0';

    printf("The Concatenated String Is %s \n",str1);
}

int compare(char str1[],char str2[])
{
    int l1,l2,i;
    l1=l2=0;

    while(str1[l1]!='\0')
        l1++;
    while(str2[l2]!='\0')
        l2++;

    if(l1!=l2)
        return 1;

    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
            return 1;
    }

    return 0;
}

void copy(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        ++i;
    }
    str2[i]='\0';
    printf("String 1: %s String 2: %s \n",str1,str2);
}

void reverse(char str1[])
{
    char str2[100];
    int i=0,count=0,end;

    while(str1[i++]!='\0')
        count++;
    end=count-1;

    for(i=0;i<=end;i++)
    {
        str2[i]=str1[count-1];
        count=count-1;
    }
    str2[i]='\0';
    printf("The Reverse String Of %s Is %s\n",str1,str2);
}


void main()
{
    char str1[100],str2[100];
    int res;

    printf("Enter First String\n");
    scanf("%s",str1);

    printf("Enter Second String\n");
    scanf("%s",str2);

    length(str1);
    length(str2);

    concatenate(str1,str2);

    res=compare(str1,str2);
    if(res==0)
        printf("Strings Are Same\n");
    else
        printf("Strings Arent Same\n");


    copy(str1,str2);

    reverse(str1);
    reverse(str2);

    exit(0);
}
