#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int i,j,sum1,sum2,a[100][100],n,diff;
    sum1=sum2=0;

    printf("Enter Size Of Square Matrix Of Dimension n*n\n");
    scanf("%d",&n);
    printf("Enter Elements Into The Array Of Size %d*%d\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                if(i==j)
                    sum1=sum1+a[i][i];
        }
    }
    printf("Sum Of Principal Diagonal Matrix Is %d\n",sum1);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
               if(i==(n-j-1))
                    sum2=sum2+a[i][j];
        }
    }
    printf("Sum Of Non Principal Diagonal Matrix Is %d\n",sum2);

    diff=sum1-sum2;
    printf("The Absolute Difference Between Sum Of Diagonals Of The Given Matrix Is %d",abs(diff));
    return 0;
}
