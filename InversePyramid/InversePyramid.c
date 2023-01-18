#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter Range :\n");
    scanf("%d",&n);
    printf("The Pattern :\n");
    for(k=n;k>=1;k--)
    {
        for(i=k;i<n;i++)
        {
            printf(" ");
        }
        for(j=k;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}    
        
    