
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    if(n%7==0 && n%3==0){
        printf("%d is devisible by 7 and 3",n);
    }
    else{
        printf("%d is not devisible by 7 and 3",n);
    }
    return 0;
}