#include<stdio.h>
#include<math.h>
void kdigit(int a,int b,int k)
{
    int p=pow(a,b);
    int count=0;
    while(p>0 && count<k)
    {
        int rem=p%10;
        count++;

        if(count==k)
        {
            printf("%d",rem);
        }
        p=p/10;
    }
}
int main()
{
    int a,b,k;
    printf("enter value of a b and k \n");
    scanf("%d%d%d",&a,&b,&k);
    kdigit(a,b,k);
    return 0;
}
