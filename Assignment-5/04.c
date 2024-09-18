
// Even odd wihtout modulas operator

#include<stdio.h>
int main(){
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);

    if(x/2*2==x){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
    return 0;
}