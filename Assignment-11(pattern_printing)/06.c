

/*
    1 
    2 1 
    3 2 1 
    4 3 2 1 
*/

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}