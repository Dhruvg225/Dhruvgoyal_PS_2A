#include<stdio.h>
void main()
{
    int a[20],b[20];
    printf("enter a string \n");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(b,a)==0)
        printf("string is palindrome");
    else
        printf("not palindrome");

}
