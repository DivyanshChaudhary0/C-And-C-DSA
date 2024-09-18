// Find that a number is prime or not...

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++){
        if(n%i==0){
            printf("%d is not prime number",n);
            break;
        }
    }
    if(i==n){
        printf("%d is a prime number",n);
    }
    return 0;
}