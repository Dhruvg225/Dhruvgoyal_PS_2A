#include<stdio.h>
void main()
{
    int i,j,k,n,num,p,s,q,a;
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
    for(p=1;p<n;p++)
    {
        for(s=1;s<=p;s++)
        {
            printf(" ");
        }
        for(q=n;q>=p+1;q--)
        {
            printf("*");
        }
        for(a=n;a>p+1;a--)
        {
            printf("*");
        }
        printf("\n");
    }
}
