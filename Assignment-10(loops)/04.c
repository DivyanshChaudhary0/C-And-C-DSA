
// WAP to calculate HCF of two numbers...

#include<stdio.h>
int main(){
    //First Method
    // int a,b,temp;
    // printf("Enter Two Numbers: ");
    // scanf("%d %d",&a,&b);

    // if(b>a){
    //     a = b;
    // }
    // while(1){
    //     if(b%a == 0){
    //         printf("HCF is %d ",a);
    //         break;
    //     }
    //     else{
    //         temp = a;
    //         a = b%a;
    //         b = temp;
    //     }
    // }

    //Second Method
    int a,b,HCF;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);

    for(HCF=a<b?a:b;  ;HCF--){
        if(a%HCF==0 && b%HCF==0){
            printf("HCF is %d",HCF);
            break;
        }
    }
    return 0;
}