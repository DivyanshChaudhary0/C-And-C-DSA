
#include<stdio.h>
void natural_odd_numbers(int);

int main(){
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    natural_odd_numbers(x);
    return 0;
}

void natural_odd_numbers(int x){
    for(int i=1;i<=2*x;i+=2){
        printf("%d ",i);
    }
}