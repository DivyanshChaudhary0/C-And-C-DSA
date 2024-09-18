
// Do the last digit of number as zero => 1234 , 1230

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    printf("The Number is %d",n/10 * 10);
    return 0;
}