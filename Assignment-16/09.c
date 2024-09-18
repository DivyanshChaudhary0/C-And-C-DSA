

#include<stdio.h>
void d_to_o(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    d_to_o(n);
    return 0;
}

void d_to_o(int x){
    if(x>0){
        d_to_o(x/8);
        printf("%d",x%8);
    }
}