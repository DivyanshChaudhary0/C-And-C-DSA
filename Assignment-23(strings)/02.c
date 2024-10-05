
// WAF to trim a string ...

#include<stdio.h>
#include<string.h>
void trim_string(char []);

int main(){
    char str[30]=" bool ";
    // printf("%d",str[strlen(str)]);
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--)
        count++;
    k=strlen(str);
    while(str[i]==' ')
        i++;
    for(j=0;str[i+j];j++)
        str[j]=str[i+j];
    str[k-count-i]='\0';
    printf("String is %s\n",str);
    printf("The length is %d",strlen(str));
    return 0;
}