
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    if(num>=100 && num<=999){
        printf("The number is three digits number");
    }
    else{
        printf("The number has not three digits");
    }
    return 0;
}