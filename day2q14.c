#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter no of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-2;i++)
    {
        for(j=i;j<=n-2;j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(k=1;k<=n;k++)
    {
        printf("*");
    }

}
