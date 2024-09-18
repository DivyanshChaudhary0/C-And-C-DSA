
// Find LCM of two numbers...

#include<stdio.h>
int main(){

    // int a,b,L=0;
    // printf("Enter Two Numbers: ");
    // scanf("%d %d",&a,&b);

    //First Method

    // for(L=a>b?a:b; L<=a*b; L++){
    //     if(L%a == 0 && L%b==0){
    //         printf("LCM is %d",L);
    //         break;
    //     }
    // }

    // Second Method
    int a,b,L=1,i=2,flag=0;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);

    while(a>1 || b>1){
        if(a%i==0){
            a = a/i;
            flag = 1;
        }
        if(b%i==0){
            b = b/i;
            flag = 1;
        }
        if(flag == 1){
            L = L*i;
            flag = 0;
        }
        else{
            i++;
        }
    }

    printf("LCM is %d ",L);
    
    return 0;
}