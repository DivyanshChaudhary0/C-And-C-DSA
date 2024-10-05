
// WAP to print all prime numbers under 100...

#include<stdio.h>
int main(){
    int i,j;
    for (i=2; i<=100; i++){
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