
// Take input from user and print all prime numbers under Inputed Number...

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=2; i<=n; i++){
        int temp = 0;
        for(j=2;j<=i-1;j++){
            if(i%j==0){
                temp=1;
                break;
            }
        }
        if( i==2 || temp==0 ){
            printf("%d ",i);
        }
    }
    
    return 0;
}