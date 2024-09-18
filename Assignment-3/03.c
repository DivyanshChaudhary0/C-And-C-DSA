
// WAP to print the unit digit of a number...

#include<stdio.h>
int main(){
    int n,ls=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    ls = n%10;
    printf("The last digit is %d",ls);
}