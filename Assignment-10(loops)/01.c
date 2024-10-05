
// WAP to find the Nth term of the fibonacci series...

#include<stdio.h>
int main(){
    int a=-1,b=1,c,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    printf("Fibonacci is %d ",c);
    return 0;
}