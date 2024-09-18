

#include<stdio.h>
int main(){
    char n;
    printf("Enter Number: ");
    scanf("%d",&n);

    if(n%3==0 && n%2==0){
        printf("%d is devisible by 2 and 3",n);
    }
    else{
        printf("%d is not devisible by 2 and 3",n);
    }
    return 0;
}