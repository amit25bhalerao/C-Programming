#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j,k;
    printf("Enter The Number Of Elements\n");
    scanf("%d",&n);
    int a[100];
    printf("Enter %d Elements Into The Array\n",n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("The Triplets Whose Sum Equals To Zero Are Displayed Below\n");


    for(i=0;i<n-2;i++)
    {
       for(j=i+1;j<n-1;j++)
       {
           for(k=j+1;j<n;j++)
           {
               if((a[i]+a[j]+a[k])==0)
                   printf("[%d, %d, %d]",a[i],a[j],a[k]);
           }
       }
    }
    exit(0);
}