#include<stdio.h>
main()
{
    int i,j,n,c;
    printf("Enter Range :\n");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=n;i>=1;i--)
    {
        c=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    
}