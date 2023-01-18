#include<stdio.h>
main()
{
    int j,k,s,n;
    printf("Enter Range :\n");
    scanf("%d",&n);
    s=n;
    printf("The Pattern :\n");
    for(k=1;k<=n;k++)
    {
        for(j=1;j<s;j++)
        {
            printf("  ");
        }
        s--;
        for(j=1;j<=(k*2)-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
    