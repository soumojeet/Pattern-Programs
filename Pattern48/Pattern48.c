#include<stdio.h>
main()
{
    int i,j,n,x,y,t;
    printf("Enter Odd Range : ");
    scanf("%d",&n);
    x=y=(n+1)/2;
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==x || j==y || j==(n+1)/2 ||i==(n+1)/2)
            printf("*");
            else
            printf(" ");
        }
        x--;
        y++;
        printf("\n");
        if(x==0 && y==n+1)
        {
            t=x;
            x=y-2;
            y=t+2;
        }
    }
    
}