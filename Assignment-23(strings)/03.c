
// WAF to count words in a given string...

#include<stdio.h>
#include<string.h>
void trim_string(char []);
int count_words(char []);

int main(){
    char str[] = "  abc  ab  ab  ";
    trim_string(str);
    int count = count_words(str);
    printf("Words in string is %d",count);
    return 0;
}

void trim_string(char str[]){
    int i,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--)
        count++;
    k=strlen(str);
    for(i=0;str[i]==' ';i++);
    for(j=0;str[i+j];j++)
        str[j]=str[i+j];
    str[k-count-i]='\0';
}

int count_words(char str[]){
    int i,count=0;
    for(i=0;str[i];i++)
        if(str[i]==' '){
            if(str[i]==str[i+1])
                continue;
            else
                count++;
        }
    return count+1;
}