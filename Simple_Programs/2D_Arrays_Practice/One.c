
#include<stdio.h>
int main(){
    int arr[5][5];
    int i,j;
    
    printf("Enter Elements: \n");
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&arr[i][j]);
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}