

#include<stdio.h>
int main(){
    int n;
    printf("Enter Marks: ");
    scanf("%d",&n);

    switch(n){
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ... 89:
            printf("Grade B");
            break;
        case 70 ... 79:
            printf("Grade C");
            break;
        case 60 ... 69:
            printf("Grade D");
            break;
        case 50 ... 59:
            printf("Grade E");
            break;
        case 1 ... 49:
            printf("Grade F");
            break;
        default: printf("Invalid Marks");
    }
    return 0;
}