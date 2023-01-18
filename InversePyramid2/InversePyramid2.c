#include<stdio.h>
main()
{
    int i,j,k,n,s;
    printf("Enter Range :\n");
    scanf("%d",&n);
    s=n;
    printf("The Pattern :\n");
    for(k=1;k<=n;k++)
    {
        for(i=1;i<k;i++)
        {
            printf(" ");
        }
        for(j=1;j<=((s*2)-1);j++)
        {
            printf("*");
        }
        s--;
        printf("\n");
    }
}
    