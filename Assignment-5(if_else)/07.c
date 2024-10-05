
// WAP to check greater number between a and b...

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    if(a>b){
        printf("a is greater");
    }
    else if(a<b){
        printf("b is greater");
    }
    else{
        printf("The numbers are same (%d %d)",a,b);
    }
    return 0;
}