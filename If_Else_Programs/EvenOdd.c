
#include<stdio.h>
int main(){
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d is Even Number",x);
    }
    else{
        printf("%d is not Even Number",x);
    }
    return 0;
}