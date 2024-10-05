

#include<stdio.h>
#include<string.h>
int find_word(char [],char []);

int main(){

    char str[50];
    printf("Enter string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    char word[50];
    printf("Enter word: ");
    fgets(word,50,stdin);
    word[strlen(word)-1]='\0';

    int res = find_word(str,word);
    printf("%d ",res);
    return 0;
}

int find_word(char str[],char word[]){
    int i,j,l;
    for(l=0;word[l];l++);
    for(i=0;str[i+l-1];i++){
        for(j=0;word[j];j++){
            if(str[i+j]!=word[j])
                break;
        }
        if(!word[j])
            return i;
    }
    return -1;
}