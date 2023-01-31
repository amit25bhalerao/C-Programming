#include <stdio.h>
#include <stdlib.h>

int search_replace(char t[], char p[], char r[], char f[])
{
    int i, j, k, l, pi, flag = 0;

    for (i = j = k = 0; t[i] != '\0'; j = 0)
    {

        //Pattern String Not Found
        if (t[i] != p[j])
        {
            f[k++] = t[i++];
            continue;
        }
        //Partial Pattern String Found
        pi = i;
        while ((p[j] != '\0') && (t[i] == p[j]))
        {
            i++;
            j++;
        }
        if (p[j] != '\0')
        {
            i = pi;
            f[k++] = t[i++];
            continue;
        }
        //Pattern String Found
        l = 0;
        while (r[l] != '\0')
        {
            f[k++] = r[l++];
        }
        flag = 1;
    }
    f[k] = '\0';
    return flag;
}


int main()
{
        char t[50],p[10],r[10],f[50];
        int flag;

        printf("Enter The Text String\n");
        gets(t);

        printf("Enter The Pattern String\n");
        gets(p);

        printf("Enter The Replace String\n");
        gets(r);

        flag=search_replace(t,p,r,f);

        if(flag==0)
            printf("Pattern Not Found\n");
        printf("Resultant String Is Displayed Below\n");
        puts(f);

        return 0;
}