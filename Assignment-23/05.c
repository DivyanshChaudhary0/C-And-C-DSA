
// WAF to do insensitive comparison of two strings...

#include<stdio.h>
#include<string.h>
int compare_string(char [],char []);

int main(){
    char str1[50],str2[50];
    printf("Enter first string: ");
    fgets(str1,50,stdin);
    str1[strlen(str1)-1]='\0';
    printf("Enter second string: ");
    fgets(str2,50,stdin);
    str2[strlen(str2)-1]='\0';
    int result = compare_string(str1,str2);
    if(result==1)
        printf("Strings are same\n");
    else
        printf("Strings are not same\n");
    return 0;
}

int compare_string(char str1[],char str2[]){
    int i;
    for(i=0;str1[i];i++){
        if(str1[i]>='a' && str1[i]<='z')
            str1[i]=str1[i]-32;
    }
    for(i=0;str2[i];i++){
        if(str2[i]>='a' && str2[i]<='z')
            str2[i]=str2[i]-32;
    }
    for(i=0;str1[i]||str2[i];i++){
        if(str1[i]!=str2[i])
            return 0;
    }
    return 1;
}