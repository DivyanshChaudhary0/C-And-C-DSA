
#include<stdio.h>
void n_prime(int);
int is_prime(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n_prime(n);
    return 0;
}

void n_prime(int x){
    int i=2;
    while(x){
        if(is_prime(i)){
            printf("%d ",i);
            x--;
        }
        i++;
    }
}

int is_prime(int x){
    int i;
    for(i=2;i<x;i++){
        if(x%i==0)
            break;
    }
    if(x==i)
            return 1;
        else
            return 0;
}