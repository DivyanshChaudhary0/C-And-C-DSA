
// Print that a number is a three digit number orr not...

#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);

    while(n)
    {
        count++;
        n=n/10;
    }
    if(count==3)
        printf("Three digit number");
    else
        printf("Not three digit number");
    return 0;
}