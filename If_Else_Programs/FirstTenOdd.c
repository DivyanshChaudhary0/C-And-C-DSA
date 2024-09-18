
#include<stdio.h>
int main(){

    for(int i=1;i<=20;i++){
        if(i%2 != 0){
            printf("%d ",i);
        }
    }

    printf("\n");

    // its the efficient way ...
    int i = 1;
    while(i<=19)
    {
        printf("%d ",i);   
        i+=2;
    }

    printf("\n");

    // we can also write it like this ...
    int j = 1;
    while(j<=10)
    {
        printf("%d ",2*j - 1);
        j++;
    }

    printf("\n");

    // Logic ( Reverse Odd Numbers )
    int k = 1;
    while(k<=10)
    {
        printf("%d ",21 - 2*k);
        k++;
    }

    return 0;
}