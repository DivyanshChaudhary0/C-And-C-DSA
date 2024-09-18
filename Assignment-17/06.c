

#include<stdio.h>
int calculate_factorial_N(int);

int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    sum = calculate_factorial_N(n);
    printf("The sum is %d",sum);
    return 0;
}

int calculate_factorial_N(int n){
    if(n==0)
        return 1;
    return n * calculate_factorial_N(n-1);
}