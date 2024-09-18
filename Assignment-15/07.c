
#include<stdio.h>
void print_fibonacci(int);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    print_fibonacci(n);
    return 0;
}

void print_fibonacci(int x){
    int a=1;
    int b=-1;
    int c;
    for(int i=1;i<=x;i++){
        c=a+b;
        b=a;
        a=c;

        printf("%d ",c);
    }
}