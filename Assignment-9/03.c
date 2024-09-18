
// WAP to calculate sum of first N Odd natural numbers ...

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i=1;i<=2*n;i++){
        if(i%2){
        sum = sum+i;
        }
    }
    printf("The sum of first %d natural numbers are %d",n,sum);
    return 0;
}