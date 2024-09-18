

// First N Odd natural numbers...

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i+=2){
        printf("%d ",i);
    }
    return 0;
}