
#include<stdio.h>
int simpleInterest(int,int,int);

int main(){
    int p,r,t,interest;
    printf("Enter P,R and T: ");
    scanf("%d %d %d",&p,&r,&t);
    interest = simpleInterest(p,r,t);
    printf("Simple interest is %d",interest);
    return 0;
}

int simpleInterest(int x,int y,int z){
    return x*y*z;
}