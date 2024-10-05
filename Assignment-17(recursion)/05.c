
#include<stdio.h>
int sum_of_digits_N(int);

int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    sum = sum_of_digits_N(n);
    printf("The sum is %d",sum);
    return 0;
}

int sum_of_digits_N(int n){
    if(n==0)
        return 0;
    return n%10 + sum_of_digits_N(n/10);
}