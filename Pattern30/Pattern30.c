#include<stdio.h>
main()
{
    int i,j,n,x,y,t;
    
    printf("Enter Odd Range : ");
    scanf("%d",&n);
    
    x=y=(n/2)+1;
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==x || j==y)
            printf("0 ");
            else
            printf("  "); 
        }
        x--;
        y++;
        if(x==0 && y==n+1)
        {
            t=x;
            x=y-2;
            y=t+2;
        }
        printf("\n");
    }
}