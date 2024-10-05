
#include<stdio.h>
float simpleInterest(int,int,int);

int main(){
    int p,r,t;
    float interest;
    printf("Enter P,R and T: ");
    scanf("%d %d %d",&p,&r,&t);
    interest = simpleInterest(p,r,t);
    printf("Simple interest is %0.2f",interest);
    return 0;
}

float simpleInterest(int x,int y,int z){
    return x*y*z/100;
}