
/*
    ABCDE
     BCDE
      CDE
       DE
        E
*/

#include<stdio.h>
int main(){
    int i,j;

    for(i=1;i<=5;i++){
        int ch = 65;
        for(j=1;j<=5;j++){
            if(j>=i){
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
            ch++;
        }
        printf("\n");
    }
    return 0;
}