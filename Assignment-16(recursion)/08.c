
#include<stdio.h>
void d_to_b(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    d_to_b(n);
    return 0;
}

void d_to_b(int x){
    if(x>0){
        d_to_b(x/2);
        printf("%d",x%2);
    }
}