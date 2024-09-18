
#include<stdio.h>
int main(){
    int x=5,i=1;

    l1:
    printf("%d x %d = %d\n",x,i,x*i);
    i++;

    if(i<=10){
        goto l1;
    }

    return 0;
}