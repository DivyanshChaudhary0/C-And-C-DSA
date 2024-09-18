
#include<stdio.h>
void print_fib(int);
int fib(int);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    print_fib(n);
    return 0;
}

void print_fib(int n){
    if(n==0)
        printf(" %d",n);
    else{
        print_fib(n-1);
        printf(" %d",fib(n));
    }
}

int fib(int n){
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}