
// WAP to print first N natural numbers...

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}