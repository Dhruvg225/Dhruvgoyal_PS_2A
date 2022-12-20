#include<stdio.h>
void main()
{
    int a[20],n,i,min;
    printf("enter no of terms");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]<a[min])
    }
    printf("%d",a[min]);
}
