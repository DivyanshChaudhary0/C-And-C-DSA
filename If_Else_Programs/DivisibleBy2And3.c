
#include<stdio.h>
int main(){
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    if(x%2==0 && x%3==0){
        printf("%d is divisible by 2 and 3",x);
    }
    else{
        printf("%d is not divisible by 2 and 3",x);
    }
    return 0;
}