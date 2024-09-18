
// input a number from user an also a digit. Append the digit in the number... 123 , 9 => 1239

#include<stdio.h>
int main(){
    int n,digit;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Enter digit: ");
    scanf("%d",&digit);

    printf("%d",n*10+digit);
    return 0;
}