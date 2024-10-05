
#include<stdio.h>
void next_two_prime(int,int);

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    next_two_prime(a,b);
    return 0;
}

void next_two_prime(int x,int y){
    int i,j;
    for(i=x+1;i<y;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
}