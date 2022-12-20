#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        char ch='A'+i-1;
        for(j=0;j<i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}
