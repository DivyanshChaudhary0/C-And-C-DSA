
// Average Of Three Numbers

#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf(" Enter Three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    avg = (a+b+c)/3.0;
    printf("The Average of %d , %d and %d is %.2f",a,b,c,avg);
    return 0;
}