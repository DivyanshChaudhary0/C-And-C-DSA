
// WAP to print first N natural numbers in reverse order...

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}