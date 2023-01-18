#include<stdio.h>
main()
{
    int i,j,n;
    
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}