
#include<stdio.h>

int main(){
    while(1){
        int choice,a,b;
        printf("Choose an operation:\n");
        printf(" 1)Addition\n 2)Subtraction\n 3)Multiplication\n 4)Division\n 5)Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b: ");
        scanf("%d",&b);
        switch(choice){
            case 1: printf("Sum is %d",a+b);
                break;
            case 2: printf("Subtract is %d",a-b);
                break;
            case 3: printf("Multiply is %d",a*b);
                break;
            case 4: printf("Division is %d",a/b);
                break;
            default: 
        }
    }
    return 0;
}