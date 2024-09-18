
// Number without its last digit

#include<stdio.h>
int main(){
    int n,ls=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    ls = n/10;
    printf("The last digit is %d",ls);
}