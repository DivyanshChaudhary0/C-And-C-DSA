
// WAP to copy one string to another string...

#include<stdio.h>
#include<string.h>
int main(){

    char str[40],s[40];
    printf("Enter a String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    int i;
    for(i=0;str[i];i++){
        s[i]=str[i];
    }
    s[i]='\0';
    printf("The Copied string is %s",s);
    return 0;
}