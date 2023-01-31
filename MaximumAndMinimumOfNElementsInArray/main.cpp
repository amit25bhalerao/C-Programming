#include<stdio.h>
int main()
{
    unsigned long long int a[5],max,min,sum=0;
    int i,n;
    printf("Enter The Number of Elements In The Array\n");
    scanf("%d",&n);
    printf("Enter %d Elements Into The Array\n",n);
    scanf("%lld",&a[0]);
    max=a[0];min=a[0];sum=a[0]+sum;
    for(i=1;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("The Minimum And Maximum Value That Can Be Calculated From The Given Array Elements Respectively Is Shown Below\n");
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}