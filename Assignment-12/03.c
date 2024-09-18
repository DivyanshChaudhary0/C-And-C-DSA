

#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        k=1;
        for(j=1;j<=2*n-1;j++){
            if(j>=n+1-i && j<=n-1+i){
                if(k)
                    printf("*");
                else
                    printf(" ");
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}