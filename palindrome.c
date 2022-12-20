#include <stdio.h>
#include <string.h>

void main()
{
    char a[20];
    int i, n;
    int flag = 0;

    printf("Enter a string: \n");
    scanf("%s", a);

    n = strlen(a);

    for(i=0;i < n ;i++)
        {
        if(a[i] != a[n-i-1])
            {
              flag = 1;
              break;
            }
        }

    if (flag==1)
    {
        printf("%s is not a palindrome", a);
    }
    else
    {
        printf("%s is a palindrome", a);
    }
}
