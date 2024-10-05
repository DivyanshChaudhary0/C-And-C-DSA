


#include<stdio.h>
void print_even_reverse(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print_even_reverse(n);
    return 0;
}

void print_even_reverse(int n){
    if(n>0){
        printf("%d ",2*n);
        print_even_reverse(n-1);
    }
}