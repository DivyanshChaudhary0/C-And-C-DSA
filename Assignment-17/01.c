
#include<stdio.h>
int sum_natural_N(int);

int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    sum = sum_natural_N(n);
    printf("The sum is %d",sum);
    return 0;
}

int sum_natural_N(int n){
    if(n==1)
        return 1;
    return n + sum_natural_N(n-1);
}