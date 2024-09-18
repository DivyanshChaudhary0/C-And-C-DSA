
// First N even numbers...

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=2;i<=2*n;i+=2){
        printf("%d ",i);
    }
    return 0;
}