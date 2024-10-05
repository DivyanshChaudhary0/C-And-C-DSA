
// WAP to find the greatest between three numbers...

#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);

    if(a>b){
        if(a>c)
            printf("a is greatest");
        else
            printf("b is gretaest");
    }
    else{
        if(b>c)
            printf("b is greatest");
        else
            printf("c is greatest");
    }
    return 0;
}