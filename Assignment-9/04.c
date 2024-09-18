
// WAP to calculate sum of squares of first N natural numbers...

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum = sum+(i*i);
    }
    printf("The sum of first %d natural numbers are %d ",n,sum);
    return 0;
}