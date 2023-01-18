#include<stdio.h>
main()
{
    int i,j,n,c=0;
    printf("Enter Range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            printf("%d ",c++);
            else
            printf("0 ");
        }
        printf("\n");
    }
}