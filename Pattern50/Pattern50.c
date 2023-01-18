#include<stdio.h>
main()
{
    int i,j,n,x,y;
    printf("Enter Odd Range : ");
    scanf("%d",&n);
    x=(n+1)/2;
    y=n-1;
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x<=n)
            {
                if(j==x || i==(n+1)/2)
                printf("* ");
                else
                printf("  ");
            }
            else
            {
                if(j==y)
                printf("* ");
                else
                printf("  ");
            }
        }
        if(x<=n)
        x++;
        else
        y--;
        printf("\n");
    }
    
}