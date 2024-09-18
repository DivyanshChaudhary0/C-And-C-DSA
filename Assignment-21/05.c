
// WAP to convert a string into Uppercase...

#include<stdio.h>
int main(){
    char str[] = "hypr jaat";
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
    return 0;
}