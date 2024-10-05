
// WAP to find the Armstrong number...

#include<stdio.h>
int main(){
    int n,count=0,temp,r,sum=0,p,i;
    printf("Enter Number: ");
    scanf("%d",&n);
    temp = n;

    while(temp){
        count++;
        temp=temp/10;
    }

    temp = n;
    while(temp){
        r=temp%10;
        for(p=1,i=1;i<=count;i++){
            p=p*r;
        }
        sum=sum+p;
        temp=temp/10;
    } 
    if(sum==n){
        printf("%d is an armstrong number",n);
    }
    else{
        printf("%d is not armstrong number",n);
    }
    return 0;
}
