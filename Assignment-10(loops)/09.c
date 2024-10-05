
// WAP to print next prime number of a given number...

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=n+1;  ;i++){
        int temp=0;  
        for(j=2;j<i;j++){
            if(i%j==0){
                temp=1;
                break;
            }
        }
        if(temp==0){
            printf("%d ",i);
            break;
        }
    }
    return 0;
}