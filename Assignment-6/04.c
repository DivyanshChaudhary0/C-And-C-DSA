
// Uppercase or Lowercase

#include<stdio.h>
int main(){
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("UpperCase");
    }
    else{
        printf("LowerCase");
    }
    return 0;
}