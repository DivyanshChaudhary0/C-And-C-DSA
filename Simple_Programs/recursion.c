
#include<stdio.h>

int findNaturalNumbers(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    findNaturalNumbers(n);
    return 0;
}

int findNaturalNumbers(int x){
    if(x>0){
        findNaturalNumbers(x-1);
        printf("%d ",x);
    }
}