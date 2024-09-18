
#include<stdio.h>

int main(){
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')){
        printf("The character %c is (UPPERCASE) alphabet",ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("The character %c is (LOWERCASE) alphabet",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("The character %c is a Number",ch);
    }
    else{
        printf("Special Character");
    }
    return 0;
}