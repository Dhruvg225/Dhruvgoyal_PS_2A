#include<stdio.h>
void main()
{
    char a[101],b[101];
    int count[26]=[0];
    int i,res=0;
    printf("enter string A");
    gets(a);
    printf("enter string B");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        count[a[i]-'a']++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        count[b[i]-'a']--;
    }
    for(i=0;i<26;i++)
    {
        res=res+abs(count[a[i]]);
    }
    printf("%d",res);
}
