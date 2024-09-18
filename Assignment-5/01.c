
// WAP to check a given number is positive or negative...

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if(n>0){
        printf("Number is Positive");
    }
    else{
        printf("Negative Number");
    }
    return 0;
}