#include<stdio.h>
void main()
{
    int i,j,p,k,n;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {int t=(2*i)-2;
    p=i;

        for(int space=1;space<=n-i;space++)
        {
            printf(" ");
        }

        for( int k=1;k<=i;k++)
        {
            printf("%d",p);
            p++;
        }
        for(int num=1;num<=i-1;num++)
        {
            printf("%d",t);
            t--;
        }
        printf("\n");
    }
}
