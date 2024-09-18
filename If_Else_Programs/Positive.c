

#include<stdio.h>
int main(){
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    if(number>0){
        printf("The Number is Positive");
    }
    else{
        printf("The Number is Negative");
    }
    return 0;
}