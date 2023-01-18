#include<stdio.h>
main()
{
    int i,j,n,c;
    printf("Enter Range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c=!c;
        }
        printf("\n");
    }
}