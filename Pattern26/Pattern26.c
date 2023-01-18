#include<stdio.h>
main()
{
    int i,j,n,k,s;
    
    printf("Enter Range : ");
    scanf("%d",&n);
    s=n;
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(k=1;k<s;k++)
        {
            printf("  ");
        }
        s--;
        for(j=1;j<=(i*2-1);j++)
        {
            if(j==1 || j==(i*2-1) || i==n)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}