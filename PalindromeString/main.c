#include<stdio.h>
#include<string.h>

void  main()
{
    char s1[100],s2[100];

    printf("Enter The String\n");
    scanf("%s",s1);

    strcpy(s2,s1);
    strrev(s2);

    if(strcmp(s2,s1)==0)
    {
        printf("The Given String Is Palindrome In Nature\n");
        return;
    }
    else
    {
        printf("The Given String Is Not Palindrome In Nature\n");
        return;
    }
}