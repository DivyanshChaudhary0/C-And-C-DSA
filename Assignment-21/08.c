
// WAP to count the total numvers of alphabets,digits and special characters in a string...

#include<stdio.h>
#include<string.h>
int main(){

    char str[40];
    printf("Enter a String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    int i,alpha_count=0,digits_count=0,special_count=0;

    for(i=0;i<str[i];i++){
        switch(str[i]){
            case 'a'...'z' : 
            case 'A'...'Z' : alpha_count++; break;
            case '1'...'9' : digits_count++; break;
            default : special_count++;
        }
    }

    printf("Alphabets are %d\n",alpha_count);
    printf("Digits are %d\n",digits_count);
    printf("Special Characters are %d",special_count);

    return 0;
}