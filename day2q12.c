#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("enter no of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    for(i=n-1;i>0;i--)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<=n-1-i;j++)
        {
            printf("%d",j);
        }
        for(k=n;k>(n-1-(2*i));k--)
        {
            printf(" ");
        }
        for(j=n-1-i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
