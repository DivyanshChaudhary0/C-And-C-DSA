
#include<stdio.h>
int main(){
    int i,j,t;
    int arr[]={2,1,4,3,6,8,7,5,9,11,10};
    for(i=0;i<11;i++){
        for(j=0;j<11-1;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(i=0;i<11;i++)
        printf("%d ",arr[i]);
    return 0;
}