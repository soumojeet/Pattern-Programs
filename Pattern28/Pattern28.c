#include<stdio.h>
main()
{
    int i,j,n;
    
    printf("Enter Range : ");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            printf("$ ");
            else
            {
                if(i==1 || i==n || j==1 || j==n)
                printf("* ");
                else
                printf("  ");
            }
        }
        printf("\n");
    }
}