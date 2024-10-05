
// WAF to transform string into uppercase...

#include<stdio.h>
#include<string.h>
void change_into_uppercase(char []);

int main(){

    char str[40];
    printf("Enter First String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    change_into_uppercase(str);
    printf("The string is %s",str);
    return 0;
}

void change_into_uppercase(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }
}