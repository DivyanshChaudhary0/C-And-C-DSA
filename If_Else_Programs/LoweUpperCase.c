
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else if(ch>='a' && ch<='z'){
        printf("LowerCase");
    }
    else{
        printf("Not a valid alphabet");
    }
    
    return 0;
}