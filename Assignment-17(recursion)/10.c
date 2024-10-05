
#include<stdio.h>
int count_power(int,int);

int main(){
    int n,m,power;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&m);
    
    power = count_power(n,m);
    printf("%d power %d is %d ",n,m,power);
    return 0;
}

int count_power(int a,int b){
    if(b==0)
        return 1;
    return a*count_power(a,b-1);
}