
// Swap values of two int variables without using third variable...

#include<stdio.h>
int main(){
    int a,b; // 10,20
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    
    a = a+b;  //30
    b = a-b;  //10
    a = a-b;  //20
    
    printf("The value of a is %d and b is %d",a,b);
}