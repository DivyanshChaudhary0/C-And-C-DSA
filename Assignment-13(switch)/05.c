
#include<stdio.h>
int main(){
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);

    switch(ch){
        case 'A' ... 'Z':
            printf("UpperCase Alphabet");
            break;
        case 'a' ... 'z':
            printf("LowerCase Alphabet");
            break;
        default: printf("Special Character");
    }
    return 0;
}