#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<5;i++)
    {
        int p=i;
        for(j=0;j<i;j++)
        {
            printf("%d",p);
            printf(" ");
            p++;
        }
        printf("\n");
    }
}
