


#include<stdio.h>
int main(){
    int m;
    printf("Enter Number: ");
    scanf("%d",&m);

    if(m==4 || m==6 || m==8 || m==10 || m==12){
        printf("30 days");
    }
    else if(m==2){
        printf("28 or 29 days");
    }
    else{
        printf("31 days");
    }
    return 0;
}