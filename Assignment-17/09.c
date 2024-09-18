
#include<stdio.h>
int count_digits(int);

int main(){
    int n,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    count = count_digits(n);
    printf("The count is %d",count);
    return 0;
}

int count_digits(int n){
    if(n==0)
        return 0;
    return count_digits(n/10)+1;
}