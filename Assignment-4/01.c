
// Input three digit number and display the sum of it...

#include<stdio.h>
int main(){
    int n,digits;
    printf("Enter a Number: ");
    scanf("%d",&n);

    digits = n/100+n/10%10+n%10;
    printf("The sum of digits are %d",digits);
    return 0;
}