

// Swap values of two int variables without using third variable and arithmatic operators...

#include<stdio.h>
int main(){
    int a,b; //5,6
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    
    a = a^b;
    b = a^b;
    a = a^b; 
    
    printf("The value of a is %d and b is %d",a,b);
}