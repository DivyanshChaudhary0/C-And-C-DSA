
// WAP to check a given number is three digit number or not...

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n>=100 && n<=999){
        printf("THREE Digit Number");
    }
    else{
        printf("NOT A THREE Digit Number");
    }
    return 0;
}