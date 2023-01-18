#include<stdio.h>
main()
{
    int i,j,n,c;
    
    printf("Enter Range : ");
    scanf("%d",&n);
    
    printf("The Pattern :\n");
    for(i=1;i<=n;i++)
    {
        c=1;
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%d ",c);
                c=!c;    
            }
            else
            {
                c=!c;
                printf("%d ",c);   
            }
        }
        printf("\n");
    }
}