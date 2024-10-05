
// WAF to find character . return index of first occurrence of given character...

#include<stdio.h>
#include<string.h>
int find_character(char [],char ch);

int main(){

    char str[40],ch;
    printf("Enter First String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter character: ");
    scanf("%c",&ch);
    int index = find_character(str,ch);
    if(index==-1)
        printf("The character '%c' is not found in string '%s' ",ch,str);
    else
        printf("The character '%c' is found in string '%s' at index %d",ch,str,index);
    return 0;
}

int find_character(char str[],char ch){
    int i;
    for(i=0;str[i];i++){
        if(str[i]==ch)
            break;
    }
    if(str[i]=='\0')
        return -1;
    else
        return i+1;
}