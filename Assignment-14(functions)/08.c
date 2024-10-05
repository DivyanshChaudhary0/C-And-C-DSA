
#include<stdio.h>
int fact(int);
int combination(int x,int r);

int main(){
    int n,r;
    printf("Enter items number: ");
    scanf("%d",&n);
    printf("Enter selected item at a time: ");
    scanf("%d",&r);

    int result = combination(n,r);
    printf("The number of combinations is %d",result);

    return 0;
}

int combination(int x,int r){
    return fact(x)/fact(r)/fact(x-r);
}

int fact(int x){
    int f=1;
    while(x){
        f=f*x;
        x--;
    }
    return f;
}