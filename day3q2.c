#include<stdio.h>
int sum(int n)
{
    return sum;
}
int main()
{
    int i,n,fact=1,sum=0;
    printf("Enter no of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(fact/i);
    }
    printf("Sum of series is : %d",sum);
}
