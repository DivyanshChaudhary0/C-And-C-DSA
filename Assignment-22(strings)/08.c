
//WAF to find character between specified indices...

#include<stdio.h>
#include<string.h>
int find_character(char [],char,int,int);

int main(){
    char str[40],ch;
    int first_index,last_index;
    printf("Enter string: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter Character: ");
    scanf("%c",&ch);
    printf("Enter starting Index: ");
    scanf("%d",&first_index);
    printf("Enter last Index: ");
    scanf("%d",&last_index);
    int result = find_character(str,ch,first_index,last_index);
    if(result==0)
        printf("Character found");
    else
        printf("Character not found");
    return 0;
}

int find_character(char str[],char ch,int first_index,int last_index){
    int i,lenght;
    lenght=strlen(str);
    if(first_index>lenght)
        return -1;
    if(last_index>=lenght)
        last_index=lenght;
    for(i=first_index;i<=last_index;i++){
        if(str[i]==ch)
            return 0;
    }
    return -1;
}