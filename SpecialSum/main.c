#include <stdio.h>
#include<stdlib.h>

void main()
{
    int i,m,n,sum;

    printf("Enter The Size Of First Array\n");
    scanf("%d",&m);
    printf("Enter The Size Of Second Array\n");
    scanf("%d",&n);
    int a[m],b[n],s[m];

    if((m==0)||(n==0))
    {
        printf("Matrix With No Size Doesnt Exists..The Program Will Terminate\n");
        exit(0);
    }

    if(m!=n)
    {
        printf("Sorry..Given Program Only Works When Two Matrices Are Of Same Size\n");
        exit(0);
    }

    printf("Enter %d Digits Into First Array Between (0-9) One By One\n",m);
    printf("Entering Digit Greater Than 9 Will Shut The Program\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>9)
        {
            printf("Wrong Input Entered..The Program Will Terminate\n");
            exit(0);
        }
    }

    printf("Enter %d Digits Into Second Array Between (0-9) One By One\n",n);
    printf("Entering Digit Greater Than 9 Will Shut The Program\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]>9)
        {
            printf("Wrong Input Entered..The Program Will Terminate\n");
            exit(0);
        }
    }

    if((m==1)&&(n==1))
    {
        s[0]=(a[0]+b[0]);
        printf("The Sum Of Given Two Arrays Is ");
        for(i=0;i<m;i++)
            printf("%d",s[i]);
        exit(0);
    }
    else
    {
        for(i=m-1;i>=0;i--)
        {
            sum=a[i]+b[i];
            if(sum<=9)
            {
                s[i]=sum;
            }
            if(sum>9)
            {
                if(i==0)
                {
                    s[i] = sum - 10;
                    break;
                }
                s[i]=(sum)%10;
                a[i-1]=(a[i-1]+10)+1;
            }

        }
    }

    printf("The Sum Of Given Two Arrays Is ");
    for(i=0;i<m;i++)
        printf("%d",s[i]);
    exit(0);

}