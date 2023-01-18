#include<stdio.h>
main()
{
    int i,j,n,d=0;
    printf("Enter Range :\n");
    scanf("%d",&n);
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            d++;
            printf("%d ",d);
        }
        printf("\n");
    }
}  