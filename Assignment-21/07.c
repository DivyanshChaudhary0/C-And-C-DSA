
// WAP to reverse a string...

#include<stdio.h>
#include<string.h>
int main(){
    char str[40],temp;
    printf("Enter a String: ");
    fgets(str,40,stdin);
    int i,l;
    l=strlen(str);
    // str[l-1]='\0';
    for(i=0;i<=l/2;i++){
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    printf("Reverse string is %s",str);
    return 0;
}