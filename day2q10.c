#inc     {
            printf("*");
        }
        for(p=n;p>i;p--)
        {
            printf("*");
        }
        printf("\n");
    }lude<stdio.h>
void main()
{
    int i,n,j,k,p;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(p=n;p>=i;p--)

    for(i=1;i<=n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            printf(" ");
        }
        for(p=1;p<=i+1;p++)
        {
            printf("*");
        }
        for(p=1;p<i+1;p++)
        {
            printf("*");
        }
        printf("\n");
    }



}
