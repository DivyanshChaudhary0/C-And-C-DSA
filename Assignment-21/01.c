
// WAP to calculate the length of string...

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str,8,stdin);
    str[strlen(str)]='\0';
    for(int i=0;str[i];i++)
        printf("%c",str[i]);
    return 0;
}