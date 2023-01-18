#include<stdio.h>
main()
{
    int i,j,n;
    printf("Enter Range :\n");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==1)
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }
    
}