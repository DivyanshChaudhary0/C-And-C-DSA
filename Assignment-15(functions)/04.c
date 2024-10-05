
#include<stdio.h>
int next_prime(int);

int main(){
    int n,prime;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime = next_prime(n);
    printf("%d is next prime number of %d",prime,n);
    return 0;
}

int next_prime(int x){
    int i,j,prime;
    for(i=x+1; ;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
        }
        if(i==j){
            break;
        }
    }
    return i;
}