
#include<stdio.h>
int calculte_lcm(int,int);

int main(){
    int a,b,LCM;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    LCM = calculte_lcm(a,b);
    printf("LCM is %d",LCM);
    return 0;
}

int calculte_lcm(int a,int b){
    for(int i=a>b?a:b;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            return i;
            break;
        }
    }
}