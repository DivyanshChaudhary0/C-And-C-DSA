
// WAP to count digits in a given number...

#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    int temp = n;

    while(temp>0)
    {
        count++;
        temp = temp/10;
    }
    printf("The count of digits in %d is %d",n,count);
    return 0;
}