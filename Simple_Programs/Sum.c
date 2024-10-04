
#include<stdio.h>
int main(){
    // int a = 10;
    // int b = 20;
    // int temp;
    // temp = a;
    // a = b;
    // b = temp;
    // printf(" The value of a is %d and b is %d",a,b);

    int arr[5] = {100,22,43,10,2};
    int i,j,temp = 0;
    for(i=0;i<5-1;i++){
        for(j=0;j<5-i;j++)
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}