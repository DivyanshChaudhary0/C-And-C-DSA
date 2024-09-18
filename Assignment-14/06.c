
#include<stdio.h>
int factorial(int);

int main(){
    int x,fact;
    printf("Enter Number: ");
    scanf("%d",&x);
    fact = factorial(x);
    printf("Factorial is %d",fact);
    return 0;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}