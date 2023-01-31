#include<stdio.h>

void main()
{
    int i,j,m,n;
    char ch[2];

    printf("Enter The Symbol For Which You Wish To Make The Pattern\n");
    scanf("%c",ch);

        printf("Enter The Dimensions Of The Block In The Given Format: Rows*Columns\n");
        scanf("%d %d", &m, &n);

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%s", ch);
            }
            printf("\n");
        }
}
