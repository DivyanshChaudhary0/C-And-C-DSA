
// WAP to calculate size of a character constant...

#include<stdio.h>
int main(){
    char ch;
    printf("ENTER CHARACTER: ");
    scanf("%c",&ch);

    sizeof(ch);

    printf("size of character is %d",sizeof(ch));
    return 0;
}