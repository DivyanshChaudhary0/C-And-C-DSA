
// WAP to calculate sum of first N even natural numbers ...

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i=2;i<=2*n;i+=2){
        sum = sum+i;
    }
    printf("The sum of first %d even natural numbers are %d",n,sum);
    return 0;
}