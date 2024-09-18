
#include<stdio.h>
int main(){
    char ch;
    printf("Enter Charcter: ");
    scanf("%c",&ch);

    switch(ch){
        case 'a': case 'e': case 'i': case 'o': case 'u': 
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel");
            break;
        case 'b'...'c': case 'f'...'h': case 'j'...'n': case 'p'...'t': case 'v'...'z':
        case 'B'...'C': case 'F'...'H': case 'J'...'N': case 'P'...'T': case 'V'...'Z':
            printf("Consonant");
            break;
        default: printf("Special Character");
    }
    return 0;
}