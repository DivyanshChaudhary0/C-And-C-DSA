
// 1 USD = 84.23 rupees. WAP to input rupees and convert it to USD

#include<stdio.h>
int main(){
    float USD,RUPEES;
    printf("Enter RUPEES: ");
    scanf("%f",&RUPEES);
    USD = (1/83.73)*RUPEES;

    printf("%0.2f RUPEES in USD is %0.2f",RUPEES,USD);
    return 0;
}