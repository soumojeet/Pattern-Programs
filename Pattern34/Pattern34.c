#include<stdio.h>
main()
{
    int i,j,n;
    
    printf("Enter Range : ");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==i)
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }
}