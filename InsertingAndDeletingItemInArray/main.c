#include <stdio.h>
#include<stdlib.h>


void main()
{
    int item, pos, n, i, choice, a[100];

    for (;;)
    {
        printf("Enter 1 To Insert An Item Into The Array\n");
        printf("Enter 2 To Delete An Item From The Array List\n");
        printf("Enter 3 To Exit \n");
        printf("\n");
        printf("Enter Your Desired Choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter The Number Of Elements To Be Entered Into The Array\n");
                scanf("%d", &n);
                printf("Enter %d Elements Into The Array\n", n);
                for (i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }
                printf("Enter The Position At Which Element Is To Be Entered\n");
                scanf("%d", &pos);
                if ((pos < 1) || (pos > n))
                {
                    printf("Invalid Position\n");
                    return;
                }
                printf("Enter The Item To Be Inserted\n");
                scanf("%d", &item);
                for (i = n; i >= pos; i--)
                {
                    a[i] = a[i - 1];
                }
                a[pos - 1] = item;
                printf("The New Array Is Displayed Below\n");
                for (i = 0; i <= n; i++)
                {
                    printf(" %d ", a[i]);
                }
                printf("\n");
                printf("\n");
                break;


            case 2:
                printf("Enter The Position From Which The Element Is To Be Deleted\n");
                scanf("%d",&pos);
                if ((pos < 1) || (pos > n))
                {
                    printf("Invalid Position\n");
                    return;
                }
                for(i=pos;i<=n;i++)
                {
                    a[i-1]=a[i];
                }
                printf("The New Array Is Displayed Below\n");
                for (i=0;i<n;i++)
                {
                    printf(" %d ", a[i]);
                }
                printf("\n");
                printf("\n");
                break;

            case 3:
                printf("Thank you\n");
                return;

            default:
                printf("Invalid Input\n");

        }
    }
}