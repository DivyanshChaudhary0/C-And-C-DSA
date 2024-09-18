
#include<stdio.h>
int main(){
    int hour,minute;
    printf("Enter (HH:MM): ");
    scanf("%d:%d",&hour,&minute);

    printf("%d hour and %d minutes",hour,minute);
    return 0;
}