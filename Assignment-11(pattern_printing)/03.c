
// Pattern Printing
/*

    * * * * *
    * * * *
    * * *
    * *
    *

*/

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    // for(int i=n;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=n+1-i)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
