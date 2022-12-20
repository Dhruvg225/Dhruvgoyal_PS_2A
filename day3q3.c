#include<stdio.h>
int sum(int n)
{
    return sum;
}
int main()
{
    int i,x[10],n,fact=1;
    float m,sum=0;
    printf("enter no of terms");
    scanf("%d",&n);
    printf("enter values of x");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        m=x[i]/fact;
        sum=sum+m;
    }
    printf("sum of series is %f",(1+sum));
}
