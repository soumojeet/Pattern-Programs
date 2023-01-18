#include<stdio.h>
main()
{
    int i,j,n,c;
    printf("Enter Range : ");
    scanf("%d",&n);
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        c=i*2;
        for(j=1;j<=i;j++)
        {
            c--;
            printf("%d ",c);
        }
        printf("\n");
    }
    
}