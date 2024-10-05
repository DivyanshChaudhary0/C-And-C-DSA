
#include<stdio.h>
void print_squares(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print_squares(n);
    return 0;
}

void print_squares(int x){
    if(x>0){
        print_squares(x-1);
        printf("%d ",x*x);
    }
}