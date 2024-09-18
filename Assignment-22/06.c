
// WAF to count vowels in a string...

#include<stdio.h>
#include<string.h>
int count_vowels(char []);

int main(){

    char str[40];
    printf("Enter First String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    int count = count_vowels(str);
    printf("The vowels count int the string %s is %d",str,count);
    return 0;
}

int count_vowels(char str[]){
    char vowels[]="aeiouAEIOU";
    int i,j,count=0;
    for(i=0;str[i];i++)
        for(j=0;vowels[j];j++)
            if(str[i]==vowels[j])
                count++;
    return count;
}