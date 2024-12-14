
#include<stdio.h>
void printN(int);
void printOdd(int);
void print_odd_reverse(int);

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    // printN(n);
    // printOdd(n);
    print_odd_reverse(n);
    return 0;
}

void printN(int n){
    if(n==0);
    else{
        printN(n-1);
        printf("%d ",n);
    }
}

void printOdd(int n){
    if(n>0){
        printOdd(n-1);
        printf("%d ",2*n-1);
    }
}

void print_odd_reverse(int n){
    if(n>0){
        printf("%d ",2*n-1);
        printOdd(n-1);
    }
}
