
#include<stdio.h>

int main(){

    for(int i=1;i<=20;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }

    printf("\n");

    for(int i=2;i<=20;i+=2){
        printf("%d ",i);
    }

    printf("\n");

    for(int i=1;i<=10;i++){
        printf("%d ",i*2);
    }

    printf("\n");

    // Logic ( Reverse Order )

    for(int i=20;i>=1;i--){
        if(i%2 == 0){
            printf("%d ",i);
        }
    }

    printf("\n");

    for(int i=20;i>=1;i-=2){
        printf("%d ",i); 
    }

    printf("\n");

    for(int i=20;i>=1;i-=2){
        printf("%d ",i); 
    }

    return 0;
}