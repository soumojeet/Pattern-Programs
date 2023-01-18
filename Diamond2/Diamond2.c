#include<stdio.h>
main()
{
    int i,j,k,s,n,d;
    printf("Enter Range :\n");
    scanf("%d",&n);
    s=n;
    printf("The Pattern :\n");
    for(k=1;k<=n;k++)
    {
        for(i=1;i<s;i++)
        {
            printf(" ");
        }
        s--;
        for(j=1;j<=(k*2)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    d=n-1;
    for(k=1;k<=n-1;k++)
    {
        for(i=1;i<=k;i++)
        {
            printf(" ");
        }
        for(j=1;j<=((d*2)-1);j++)
        {
            printf("*");
        }
        d--;
        printf("\n");
    }
}
    