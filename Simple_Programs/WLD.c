
#include<stdio.h>
int main(){
    int n,removeLast;
    printf("Enter Number: ");
    scanf("%d",&n);
    removeLast = n/10;
    printf("The Number %d without Last digit is %d",n,removeLast);
    return 0;
}