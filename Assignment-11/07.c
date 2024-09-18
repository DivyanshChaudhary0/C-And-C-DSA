
/*
   ABCDE
    ABCD
     ABC
      AB
       A
*/

#include<stdio.h>
int main(){
    int i,j;

    for(i=1;i<=5;i++){
        int ch = 65;
        for(j=1;j<=5;j++){
            if(j>=i){
                printf("%c",ch);
                ch++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}