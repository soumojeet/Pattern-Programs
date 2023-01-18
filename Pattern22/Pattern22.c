#include<stdio.h>
main()
{
    int i,j,n,s,k,c;
    printf("Enter Range : ");
    scanf("%d",&n);
    s=n*2;
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        c=i;
        for(k=1;k<s;k++)
        printf(" ");
        s=s-2;
        
        for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c++;
        }
        c--;
        for(k=i;k>1;k--)
        {
            c--;
            printf("%d ",c);
        }
        printf("\n");
    }
}