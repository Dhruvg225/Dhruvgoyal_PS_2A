#include<stdio.h>
void main()
{
    int i,j,k,n,p,num;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int t=2;
        p=i;
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",p);
            p--;
        }
        for(num=1;num<=i-1;num++)
        {
            printf("%d",t);
        }
        printf("\n");
    }
}
