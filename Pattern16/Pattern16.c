#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter Range : ");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}