
// WAF to find that a string is alphanumeric or not ...

#include<stdio.h>
#include<string.h>
int check_alphaNumeric_string(char []);

int main(){

    char str[40];
    printf("Enter First String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    int check = check_alphaNumeric_string(str);
    if(check==0)
        printf("Alphanumeric String:");
    else
        printf("Not alphanumeric String:");
    return 0;
}

int check_alphaNumeric_string(char str[]){
    int i,digit=0,alpha=0;
    for(i=0;str[i];i++){
        if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ){
            alpha=1;
        }
        if(str[i]>='0' && str[i]<='9'){
            digit=1;
        }
    }
    if(digit&alpha)
        return 0;
    else
        return -1;
}