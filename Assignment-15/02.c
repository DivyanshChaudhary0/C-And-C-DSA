
#include<stdio.h>
int calculte_hcf(int,int);

int main(){
    int a,b,HCF;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    HCF = calculte_hcf(a,b);
    printf("HCF is %d",HCF);
    return 0;
}

int calculte_hcf(int a,int b){
    for(int i=a<b?a:b;i>=1;i--){
        if(a%i==0 && b%i==0)
            return i;
            break;
    }
}