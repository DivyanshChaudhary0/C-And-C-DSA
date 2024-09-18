

#include<stdio.h>
void print_reverse(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print_reverse(n);
    return 0;
}

void print_reverse(int x){
    if(x>0){
        printf("%d",x%10);
        print_reverse(x/10);
    }
}