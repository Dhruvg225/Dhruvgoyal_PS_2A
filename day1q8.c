#include<stdio.h>
void main()
{
    int x,y;
    printf("enter coordinate of x");
    scanf("%d",&x);
    printf("enter coordinate of y");
    scanf("%d",&y);
    if(x>0 && y>0)
        printf("first coordinate");
    else if(x<0 && y>0)
        printf("second coordinate");
    else if(x<0 && y<0)
        printf("third coordinate");
    else
        printf("fourth coordinate");
}
