#include<stdio.h>
void main()
{
    float c;
    printf("enter temperature in centigrate");
    scanf("%f",&c);
    if(c<0)
        printf("freezing weather");
    else if(c<=0 || c>10)
        printf("very cold weather");
    else if(c<=10 || c>20)
        printf("very cold weather");
    else if(c<=20 || c>30)
        printf("very cold weather");
    else if(c<=30 || c>40)
        printf("very cold weather");
    else
        printf("very hot");
}
