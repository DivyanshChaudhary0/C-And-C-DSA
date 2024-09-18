
// WAF to compare two strings...

#include<stdio.h>
#include<string.h>
void compare_strings(char str1[],char str2[]);

int main(){

    char str1[40],str2[40];
    printf("Enter First String: ");
    fgets(str1,40,stdin);
    str1[strlen(str1)-1]='\0';
    printf("Enter Second String: ");
    fgets(str2,40,stdin);
    str2[strlen(str2)-1]='\0';

    compare_strings(str1,str2);
    return 0;
}

void compare_strings(char str1[],char str2[]){
    int i=0;
    while(str1[i]&&str2[i]){
        if(str1[i]!=str2[i])
            break;
        i++;
    }
    if(str1[i]==str2[i])
        printf("%s is same as %s",str1,str2);
    else
        printf("%s is not same as %s",str1,str2);
}