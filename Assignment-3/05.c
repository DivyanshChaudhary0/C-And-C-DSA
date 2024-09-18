
// Swap values of two int variables...

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("The value of a is %d and b is %d",a,b);
}