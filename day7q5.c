#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int i,n;
    printf("Enter Size:\n");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(n));
    printf("Enter Elements:\n");
    for(i=0;i<n;i++){
            scanf("%d",a+i);}
    printf("Reversed Array:");
    for(i=n-1;i>=0;i--){
            printf("%d ",*(a+i));
      }





return 0;
}

