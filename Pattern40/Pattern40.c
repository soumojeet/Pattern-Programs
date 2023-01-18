#include<stdio.h>
main()
{
    int i,j,n,k;
    printf("Enter Range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(k=j-2;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}