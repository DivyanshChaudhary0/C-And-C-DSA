

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter lenth of array: ");
    scanf("%d",&n);
    int arr[n],min=arr[0];

    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    printf("The smallest number in the array is %d",min);
    return 0;
}