#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter Range :\n");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
}