
// WAF to count frequency of each character...

#include<stdio.h>
#include<string.h>
void count_frequency(char []);

int main(){
    char str[50];
    printf("Enter first string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    count_frequency(str);
    return 0;
}

void count_frequency(char str[]){
    int i,f[128]={0};
    for(i=0;str[i];i++)
        f[str[i]]++;
    for(i=0;i<128;i++){
        if(f[i]!=0)
            printf("%c - %d\n",i,f[i]);
    }
}