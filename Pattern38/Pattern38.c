#include<stdio.h>
main()
{
    int i,j,n,c=1;
    printf("Enter Range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",c);
            c=!c;
        }
        printf("\n");
    }
}