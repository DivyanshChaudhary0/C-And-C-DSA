// Pattern Printing
/*

            *
          * *
        * * *
      * * * *
    * * * * *

*/

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            // if(i+j<=n){
            //     printf(" ");
            // }
            // else
            //  printf("*");
             if(j>=n+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}