#include<stdio.h>
main()
{
    int i,j,d,n;
    printf("Enter Range : ");
    scanf("%d",&n);
    d=(n/2)+(n%2);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==d || j==d)
            printf("+ ");
            else
            printf("  ");
        }
        printf("\n");
    }
}