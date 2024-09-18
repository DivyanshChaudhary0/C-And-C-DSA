
// WAF to find that a string is alphanumeric or not ...

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int check_alphaNumeric_string(char []);

int main(){

    char str[40];
    printf("Enter First String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    bool check = count_vowels(str);
    return 0;
}

int check_alphaNumeric_string(char str[]){
    int i,temp=0;
    for(i=0;str[i];i++){
        if( (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9') ){
            temp=1;
            break;
        }
        else if( (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9') ){
            temp=1;
            break;
        }
    }
    return temp;
}