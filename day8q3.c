#include<stdio.h>
void adddigit(int n)
{
   int sum=0;
   while(n>0 || sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
      sum=sum+(n%10);
      n=n/10;
   }
   printf("%d",sum);

}
int main()
{
   int n;
   printf("enter no \n");
   scanf("%d",&n);
   adddigit(n);
   return 0;
}
