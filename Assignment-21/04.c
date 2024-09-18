
// WAP to count spaces in a given string...

#include<stdio.h>

int main(){
    char str[] = "Bhola Chaudhary";
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]==' ')
            count++;
    }
    printf("The count of spaces in the string '%s' is %d",str,count);
    return 0;
}