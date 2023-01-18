#include<stdio.h>
main()
{
    int i,j,k,n,p=1,q;
    printf("Enter Range : ");
    scanf("%d",&n);
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        k=n;
        for(j=1;j<=n;j++)
        {
           if(j>=i) 
           printf("%d ",k);
           else
           printf("%d ",k--);   
        }
        printf("\n");
    }
}