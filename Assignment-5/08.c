

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);

    if(b*b-4*a*c > 0){
        printf("Roots are real and distinct");
    }
    else if(b*b-4*a*c == 0){
        printf("Roots are real and equal");
    }
    else{
        printf("Roots are imaginay roots");
    }

    return 0;
}