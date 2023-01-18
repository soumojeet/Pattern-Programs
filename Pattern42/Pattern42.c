#include<stdio.h>
main()
{
    int i,j,n,x;
    printf("Enter Range : ");
    scanf("%d",&n);
    x=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=x)
            printf("%d ",j);
            else
            printf("  ");
        }
        printf("\n");
        x++;
    }
    x--;
    for(i=1;i<n;i++)
    {
        x--;
        for(j=1;j<=n;j++)
        {
            if(j>=x)
            printf("%d ",j);
            else
            printf("  ");
        }
        printf("\n");
    }
}