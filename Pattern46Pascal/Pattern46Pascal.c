#include<stdio.h>
main()
{
    int i,j,n,s,d,u=1,t=1;
    printf("Enter Range : ");
    scanf("%d",&n);
    s=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<s;j++)
        printf(" ");
        s--;
        
        while(u!=0)
        {
            d=u%10;
            printf("%d ",d);
            u/=10;
        }
        printf("\n");
        t=t*11;
        u=t;
    } 
}