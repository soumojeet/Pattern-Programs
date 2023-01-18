#include<stdio.h>
main()
{
    int i,j,n,x,y,t;
    printf("Enter Even Range : ");
    scanf("%d",&n);
    x=n/2;
    y=n/2+1;
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x<y)
            {
                if(j<=x || j>=y)
                printf("*");
                else
                printf(" ");
            }
            else
            {
                if(j>=x || j<=y)
                printf("*");
                else
                printf(" ");
            }
        }
        x--; y++; 
        printf("\n");
        if(x==0 && y==n+1)
        {
            t=x;
            x=--y;
            y=++t;
        }
    }
}