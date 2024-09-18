
#include<stdio.h>
int main(){
    int n,Ln;
    printf("Enter Number: ");
    scanf("%d",&n);
    Ln = n%10;
    printf("The Unit digit of %d is %d ",n,Ln);
    return 0;
}