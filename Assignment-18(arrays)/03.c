

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter lenth of array: ");
    scanf("%d",&n);
    int arr[n],sumEven=0,sumOdd=0;

    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            sumEven+=arr[i];
        else
            sumOdd+=arr[i];
    }
    printf("The sum of even numners is %d and odds is %d",sumEven,sumOdd);

    return 0;
}