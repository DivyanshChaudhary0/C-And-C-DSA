


#include<stdio.h>
int main(){
    int month;
    printf("Enter Number: ");
    scanf("%d",&month);

    if(month==4 || month==6 || month==8 || month==10 || month==12){
        printf("30 days");
    }
    else if(month==2){
        printf("28 or 29 days");
    }
    else{
        printf("31 days");
    }
    return 0;
}