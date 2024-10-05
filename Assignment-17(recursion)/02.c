
#include<stdio.h>
int sum_odd_N(int);

int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    sum = sum_odd_N(n);
    printf("The sum is %d",sum);
    return 0;
}

int sum_odd_N(int n){
    if(n==1)
        return 1;
    return 2*n-1 + sum_odd_N(n-1);
}