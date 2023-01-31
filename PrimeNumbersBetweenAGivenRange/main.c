#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,j,a,b,k,z,count;
    int* u;
    k=z=count=0;
    printf("\nEnter The Lower Limit And The Upper Limit Range Between Which You Wish To Display The Prime Numbers\n");
    printf("\nEnter The Lower Limit\n");
    scanf("%d",&a);
    printf("Enter The Upper Limit\n");
    scanf("%d",&b);

    if(b<a)
    {
        a=a+b;
        b=a-b;
        a=a-b;
        printf("\nThe New Lower Limit Is %d: \n",a);
        printf("The New Upper Limit Is %d: \n\n",b);
    }

    if((b<a)||(b<0)||(a<0))
    {
        printf("Invalid Input...Please Try Again\n");
        exit(0);
    }
    u=(int*)calloc((b-a), sizeof(int));

    for(i=a;i<=b;i++)
    {
        for(j=1;j<=b;j++)
        {
            if(i%j==0)
            {
                k=k+1;
            }
        }
        if(k==2)
        {
            u[z]=i;
            ++z;
            ++count;
        }
        k=0;
    }
    printf("The Prime Numbers Between %d And %d Are %d In Total Which Are Displayed Below\n",a,b,count);
    for(i=0;i<count;i++)
    {
        printf("  %d  ", *(u+i));
    }
    exit(0);
}