

#include <stdio.h>
#include <math.h>
int main(){

    int n,count,r,sum,i,p;

    for(n=1;n<=1000;n++){
    int temp=n;
    count=0;
    sum=0;
    while(temp){
        temp=temp/10;
        count++;
    }

    temp=n;

    while(temp){
        r = temp%10;
        for(i=1,p=1;i<=count;i++)
            p=p*r;
        sum = sum + p;
        temp = temp/10;
    }

    if(sum==n){
        printf("%d ",n);
    }}

    return 0;
}