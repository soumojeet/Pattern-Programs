#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter Range : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf("%d ",j);  
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d ",j);
        printf("\n");
    }
}