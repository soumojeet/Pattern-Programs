#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter Range : ");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
    
