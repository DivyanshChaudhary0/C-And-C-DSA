

#include<stdio.h>
void print_odd_reverse(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print_odd_reverse(n);
    return 0;
}

void print_odd_reverse(int n){
    if(n>0){
        printf("%d ",2*n-1);
        print_odd_reverse(n-1);
    }
}