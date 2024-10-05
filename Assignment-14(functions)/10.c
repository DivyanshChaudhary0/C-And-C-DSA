
#include<stdio.h>
void print_factor(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print_factor(n);
    return 0;
}

void print_factor(int x){
    int i=2;
    while(x>1){
        if(x%i==0){
            x=x/i;
            printf("%d ",i);
        }
        else{
            i++;
        }
    }
}