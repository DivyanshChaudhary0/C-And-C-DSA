
#include<stdio.h>
#include<stdlib.h>

int main(){
    while(1){
        printf("choose an operation: \n");
        printf(" 1)Addition \n 2)Subtraction \n 3)Multiplication \n 4)Devision \n 5)Exit() \n");
        int n,a,b;
        printf("choose your input: ");
        scanf("%d",&n);
        if(n>=5){
            exit(0);
        }
        printf("enter a: ");
        scanf("%d",&a);
        printf("enter b: ");
        scanf("%d",&b);

        switch(n){
            case 1: printf("Sum is %d\n",a+b);
            break;
            case 2: printf("Minus is %d\n",a-b);
            break;
            case 3: printf("multiply is %d\n",a*b);
            break;
            case 4: printf("Division is %d\n",a/b);
            break;
        }
    }
    return 0;
}