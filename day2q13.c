#include<stdio.h>
void main()
{
    int i,n;
    printf("enter no of terms");
    scanf("%d",n);
    while(i>=0)
    {
        i=n;
        printf("%d\t",i);
        i=i-5;
    }
}
