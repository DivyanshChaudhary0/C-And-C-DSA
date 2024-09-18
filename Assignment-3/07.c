
// Swap values of two int variables without using third variable and +,- operators...

#include<stdio.h>
int main(){
    int a,b; //5,6
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    
    a = a*b; //30
    b = a/b; //5
    a = a/b; //6
    
    printf("The value of a is %d and b is %d",a,b);
}