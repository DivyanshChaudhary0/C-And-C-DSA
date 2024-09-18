
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    switch(n){
        case 1: printf("Sunday");
        break;
        case 2: printf("Monday");
        break;
        case 3: printf("Tuesday");
        break;
        case 4 ... 10: printf("Tuesday");
        break;
        case 11 ... 20: printf("Tuesday");
        break;
        default: printf("Not a valid day");
    }
    return 0;
}