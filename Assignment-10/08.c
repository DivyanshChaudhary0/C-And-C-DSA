
// WAP to print all prime numbers between two given numbers...

#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        int temp=0;
        for(j=2;j<=i-1;j++){
            if(i%j==0){
                temp=1;
                break;
            }
        }
        if(i==2 || temp==0){
            printf("%d ",i);
        }
    }
    return 0;
}