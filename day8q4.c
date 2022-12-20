#include<stdio.h>
void main()
{
    int n,sum=0,a,i,arr[20];
    printf("enter no");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        a=n%10;
        arr[i]=a;
        n=n/10;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }



}
