
// WAP to convert a string into Lowercase...

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("Enter a String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
    return 0;
}