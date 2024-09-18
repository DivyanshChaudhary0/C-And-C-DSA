
// WAP to calculate average of three numbers...

#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    avg = (a+b+c)/3.0;
    printf("Average is %2f ",avg);
    return 0;
}