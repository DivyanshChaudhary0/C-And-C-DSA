
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter lenth of array: ");
    scanf("%d",&n);
    int arr[n],max=arr[0];

    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("The greatest number in the array is %d",max);
    return 0;
}