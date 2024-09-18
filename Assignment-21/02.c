
// WAP to count the occurance of a character...

#include<stdio.h>
#include<string.h>
int main(){
    char ch,str[40];
    printf("Enter a String: ");
    fgets(str,40,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter a character: ");
    scanf("%c",&ch);
    int i,count;
    for(i=0,count=0;str[i];i++)
        if(str[i]==ch)
            count++;
    printf("Count is %d",count);
    return 0;
}