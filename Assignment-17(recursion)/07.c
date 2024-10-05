
#include<stdio.h>
int HCF_two(int,int);

int main(){
    int a,b,HCF;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    HCF = HCF_two(a,b);
    printf("The HCF of %d and %d is %d",a,b,HCF);
    return 0;
}

int HCF_two(int a,int b){
    if(a>b){
        if(a%b==0)
            return b;
        else
            return HCF_two(a%b,b);
    }
    else{
        if(b%a==0)
            return a;
        else
            return HCF_two(b%a,a);
    }
}