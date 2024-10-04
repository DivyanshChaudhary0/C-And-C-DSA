
// WAP to check year is a leap year or not...

#include<stdio.h>
int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);

    if(year%4==0){
        if(year%400==0)
            printf("Leap Year");
        else
            printf("Not a leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}