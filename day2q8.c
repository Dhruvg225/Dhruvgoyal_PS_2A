#include<stdio.h>
void main()
{
    int i,j,k,n,num;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        for(num=1;num<=i-1;num++)
        {
            printf("*");
        }
        printf("\n");
    }
}
