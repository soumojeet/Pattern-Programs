#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter Range :\n");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}