#include<stdio.h>
main()
{
    int i,j,n,x,y;
    printf("Enter Range : ");
    scanf("%d",&n);
    x=1;y=n;
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x<y)
            {
                if(j>x && j<y)
                printf("  ");
                else
                printf("* ");
            }
            else
            {
                if(j<x && j>y)
                printf("  ");
                else
                printf("* ");
            }
        }
        x++; y--;
        printf("\n");
    }
}