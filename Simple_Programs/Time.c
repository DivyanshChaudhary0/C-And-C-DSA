
#include<stdio.h>
int main(){
    int hour,minutes;
    printf("Enter Time (HH:MM) : ");
    scanf("%d:%d",&hour,&minutes);
    printf("%d - Hour And %d - Minutes",hour,minutes);
    return 0;
}