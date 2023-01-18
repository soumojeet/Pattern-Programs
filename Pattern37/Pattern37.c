#include<stdio.h>
main()
{
    int i,j,n,c,s;
    printf("Enter Range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=n;
        c=i;
        for(j=1;j<=i;j++)
        {
            s--;
            printf("%d ",c);
            c=c+s;
        }
        printf("\n");
    }
}