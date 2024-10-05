
#include<stdio.h>
int is_prime(int);

int main(){
    int n,prime;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime = is_prime(n);

    if(prime)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}

int is_prime(int x){
    int i;
    for(i=2;i<x;i++){
        if(x%i==0)
            break;
    }
    if(x==i)
            return 1;
    else
        return 0;
}