#include<stdio.h>
main()
{
    int i,j,n,c=0;
    printf("Enter Range :\n");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            c++;
            printf("%d\t",c);
        }
        printf("\n");
    }   
}