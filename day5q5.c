#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("enter no of elements");
    scanf("%d",&n);
    for(i=1;i<n;i=i+2)
    {
        printf("%d ",i);
    }
    if(n%2==0)
    {
        for(i=n;i>1;i=i-2)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=n-1;i>1;i=i-2)
        {
            printf("%d ",i);
        }
    }
}
