

/*

ABCDCBA
 ABCBA
  ABA
   A  

*/

#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        k=65;
        for(j=1;j<=2*n-1;j++){
            if(j>=i && j<=2*n-i){
                printf("%c",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}