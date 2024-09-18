
// WAP to find wheather a given number is in the fibonacci series or not...

#include<stdio.h>
int main(){
    int a=-1,b=1,c,n,i;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        c = a+b;
        if( c==n ){
            printf("\n%d is in the fibonacci series",n);
            break;
        }
        else if (c>n){
            printf("\n%d is not in the fibonacci series",n);
            break;
        }
        a = b;
        b = c;

        printf("%d ",c);
    }
    return 0;
}