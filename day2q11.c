#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=((2*n)-(2*i));k>0;k--)
        {
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
