
#include<stdio.h>
int sum_even_N(int);

int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    sum = sum_even_N(n);
    printf("The sum is %d",sum);
    return 0;
}

int sum_even_N(int n){
    if(n==0)
        return 0;
    return 2*n + sum_even_N(n-1);
}