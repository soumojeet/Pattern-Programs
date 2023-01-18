#include<stdio.h>
main()
{
    int i,j,n,x;
    printf("Enter Range : ");
    scanf("%d",&n);
    x=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<x)
            printf("1 ");
            else
            printf("%d ",i);
        }
        printf("\n");
        x--;
    }
}