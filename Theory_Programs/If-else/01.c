
#include<stdio.h>

int main(){
    do{
        printf("Choose an operation:\n");
        printf(" 1)Addition\n 2)Subtraction\n 3)Multiplication\n 4)Division\n 5)Exit\n");
        int choice,a,b;
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice>=5){
            printf("exit");
            break;
        }
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b: ");
        scanf("%d",&b);
        if(choice==1){
            printf("Sum is %d\n",a+b);
        }
        else if(choice==2){
            printf("Subtraction is %d\n",a-b);
        }
        else if(choice==3){
            printf("Multiplication is %d\n",a*b);
        }
        else if(choice==4){
            printf("Division is %d\n",a/b);
        }
    }while(1);

    return 0;
}