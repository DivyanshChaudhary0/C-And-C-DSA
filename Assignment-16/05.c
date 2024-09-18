

#include<stdio.h>
void print_even(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print_even(n);
    return 0;
}

void print_even(int n){
    if(n>0){
        print_even(n-1);
        printf("%d ",2*n);
    }
}