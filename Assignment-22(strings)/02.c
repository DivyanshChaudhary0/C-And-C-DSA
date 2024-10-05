
// WAF to reverse a string...

#include<stdio.h>
#include<string.h>
// char* reverse_string(char str[])
void reverse_string(char str[]);

int main(){
    char str[40];
    printf("Enter String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    reverse_string(str);
    printf("The reverse string is %s",str);
    return 0;
}

// char* reverse_string(char str[]){
//     int i,temp,l;
//     l=strlen(str);
//     for(i=0;i<=l/2;i++){
//         temp=str[i];
//         str[i]=str[l-i-1];
//         str[l-i-1]=temp;
//     }
//     return str;
// }

void reverse_string(char str[]){
    int i,temp,l;
    l=strlen(str);
    for(i=0;i<=l/2;i++){
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
}