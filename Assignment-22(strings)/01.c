
// WAF to calculate length of string...

#include<stdio.h>
#include<string.h>
int get_Length(char str[]);

int main(){
    char str[40];
    printf("Enter String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    int length = get_Length(str);
    printf("The length of %s is %d",str,length);
    return 0;
}

int get_Length(char str[]){
    int i;
    for(i=0;str[i];i++);
    return i;
}