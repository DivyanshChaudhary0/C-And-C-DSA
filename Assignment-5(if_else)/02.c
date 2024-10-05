
// WAP to check a number is divisible by 5 or not...

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n%5==0){
        printf("YES Number is divisible");
    }
    else{
        printf("NO Number is not divisible");
    }
    return 0;
}