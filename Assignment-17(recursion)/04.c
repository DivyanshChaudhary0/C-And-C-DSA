
#include<stdio.h>
int sum_squares_N(int);

int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    sum = sum_squares_N(n);
    printf("The sum is %d",sum);
    return 0;
}

int sum_squares_N(int n){
    if(n==1)
        return 1;
    return n*n + sum_squares_N(n-1);
}