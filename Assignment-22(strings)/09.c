
// WAF to swap two characters of a string with specified indices...

#include<stdio.h>
#include<string.h>
void swap_character(char [],int,int);

int main(){
    char str[40];
    int first_index,last_index;
    printf("Enter string: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter starting Index: ");
    scanf("%d",&first_index);
    printf("Enter last Index: ");
    scanf("%d",&last_index);
    swap_character(str,first_index,last_index);
    printf("%s",str);
    return 0;
}

void swap_character(char str[],int first,int last){
    char ch;
    int length = strlen(str);
    if(first>=length || last>=length)
        printf("Swapping not possiable");
    else{
        ch=str[first];
        str[first]=str[last];
        str[last]=ch;
    }
}