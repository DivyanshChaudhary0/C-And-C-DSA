
// WAF to transform string into lowercase...

#include<stdio.h>
#include<string.h>
void change_into_lowecase(char []);

int main(){

    char str[40];
    printf("Enter First String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    change_into_lowecase(str);
    printf("The string is %s",str);
    return 0;
}

void change_into_lowecase(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
}