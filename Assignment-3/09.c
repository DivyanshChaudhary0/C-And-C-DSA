

// Swap values of two int variables in one line of code...

#include<stdio.h>
int main(){
    int a,b; //5,6
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);

    a = a+b-(b=a);

    printf("The value of a is %d and b is %d",a,b);
}