
#include<stdio.h>
void naturalNumbers(int);

int main(){
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);
    naturalNumbers(x);
    return 0;
}

void naturalNumbers(int x){
    for(int i=1;i<=x;i++){
        printf("%d ",i);
    }
}