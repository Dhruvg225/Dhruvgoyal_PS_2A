#include<stdio.h>
void main()
{
    int n,i,sum=0,fact=1;
    printf("enter no of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("sum of series is:%d\n",sum);
}
