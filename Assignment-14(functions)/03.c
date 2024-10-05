
#include<stdio.h>
int evenOdd(int);

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    int n = evenOdd(num);
    printf("%d",n);
    return 0;
}

int evenOdd(int x){
    if(x%2==0)
        return 1;
    else
        return 0;
}