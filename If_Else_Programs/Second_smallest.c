
// Second Smallest...

#include<stdio.h>
int main(){

    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int MIN,SECOND_MIN;
    if(arr[0]<arr[1]){
        MIN=arr[0];
        SECOND_MIN=arr[1];
    }else{
        MIN=arr[1];
        SECOND_MIN=arr[0];
    }

    for(i=2;i<n;i++){
        if(arr[i]<MIN){
            SECOND_MIN=MIN;
            MIN=arr[i];
        }
        else if(arr[i]<SECOND_MIN){
            SECOND_MIN=arr[i];
        }
    }
    
    printf("The MINIMUM element is %d SECOND_MIN element is %d",MIN,SECOND_MIN);
    return 0;
}