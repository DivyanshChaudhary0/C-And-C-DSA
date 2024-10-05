
#include<stdio.h>
void print_odd(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print_odd(n);
    return 0;
}

void print_odd(int n){
    if(n>0){
        print_odd(n-1);
        printf("%d ",2*n-1);
    }
}