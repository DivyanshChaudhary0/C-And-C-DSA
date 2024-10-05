
// WAF to check a string is palindrome or not...

#include<stdio.h>
#include<string.h>
int is_palindrome(char []);

int main(){
    char str[30];
    printf("Enter string: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    int res = is_palindrome(str);
    if(res==0)
        printf("%s is a palindrome string",str);
    else
        printf("%s is not a palindrome string",str);
    return 0;
}

int is_palindrome(char str[]){
    int temp=0,l;
    l=strlen(str);
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
            temp=1;
            break;
        }
    }
    return temp;
}
