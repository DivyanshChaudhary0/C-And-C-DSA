

#include<stdio.h>
int main(){
    char x;
    printf("Enter Number: ");
    scanf("%c",&x);

    if(x>='a' && x<='z'){
        printf("Lowecase Alphabet");
    }
    else if(x>='A' && x<='Z'){
        printf("Uppercase Alphabet");
    }
    else if(x>='1' && x<='9'){
        printf("Number");
    }
    else{
        printf("Special Character");
    }
    return 0;
}