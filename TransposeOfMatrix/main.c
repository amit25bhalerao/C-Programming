#include <stdio.h>

int main()
 {
    int a[100][100],i,j,m,n;

    printf("Enter The Order Of The Matrix i.e m*n, Where m Denotes Maximum Number Of Rows And n Denotes Maximum Number Of Columns\n");
    scanf("%d %d",&m,&n);
    printf("Enter The Elements In The Matrix Of Order %d*%d\n",m,n);


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             printf(" %d ",a[j][i]);
         }
         printf("\n");
     }

     return 0;
 }