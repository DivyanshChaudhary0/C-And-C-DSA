
// WAP to input a number and rotate its digits towards one position right...

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    printf("The Number is %d",n%10*100 + n/10);
    return 0;
}