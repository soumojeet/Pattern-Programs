#include<stdio.h>
main()
{
    int i,j,n,k;
    
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(k=i;k>1;k--)
        {
           printf("  ");
        }
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}