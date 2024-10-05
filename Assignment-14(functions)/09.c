

#include<stdio.h>
int is_contain(int,int);

int main(){
    int n,digit;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter digit: ");
    scanf("%d",&digit);
    if(is_contain(n,digit))
        printf("The Number %d has %d",n,digit);
    else
        printf("The Number %d has not %d",n,digit);
    return 0;
}

int is_contain(int n,int digit){
    int r,res=0;
    while(n){
        r=n%10;
        n=n/10;
        if(r==digit){
            res=1;
            break;
        }
    }
    return res;
}