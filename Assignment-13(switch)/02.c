
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("1)Addition \n 2)Subtraction \n 3)Multiplication \n 4)Devision 5)Exit()");
    int a,b,n;
    printf("\nEnter two Numbers: ");
    scanf("%d %d",&a,&b);

    printf("What You want to do:");
    scanf("%d",&n);

    switch(n){
        case 1: printf("Addition is %d",a+b);
        break;
        case 2: printf("Subtraction is %d",a-b);
        break;
        case 3: printf("Multiplication is %d",a*b);
        break;
        case 4: printf("Devision is %d",a/b);
        break;
        case 5: exit(0);
    }

    return 0;
}