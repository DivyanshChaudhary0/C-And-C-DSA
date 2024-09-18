
// WAP to calculate simple interest...

#include<stdio.h>
int main(){
    int p,r,t;
    float i;
    printf("Enter priciple,rate, and time: ");
    scanf("%d %d %d",&p,&r,&t);

    i = (p*r*t)/100.0;
    printf("Simple Interest is %f",i);
    return 0;
}