

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("The Value of a is %d and b is %d",a,b);
    return 0;
}