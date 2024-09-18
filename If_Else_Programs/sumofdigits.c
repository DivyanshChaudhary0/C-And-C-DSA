
#include<stdio.h>
int main(){
    int num,r,sum=0;
    printf("Enter Three Digits Number: ");
    scanf("%d",&num);

    // int temp = num;

    // r = num%10;
    // sum = sum+r;
    // num = num/10;

    // r = num%10;
    // sum = sum+r;
    // num = num/10;

    // r = num%10;
    // sum = sum+r;

    // Easy Way to solve this question

    sum =   num/100 + (num/10)%10 + num%10;

    printf("The sum of %d is %d",num,sum);

    return 0;
}