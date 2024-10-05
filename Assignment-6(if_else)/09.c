



#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b){
        printf("Valid Triangle");
    }
    else{
        printf("Not a valid triangle");
    }
    return 0;
}