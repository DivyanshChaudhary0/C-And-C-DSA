
//WAP to find second smallest number in the array

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter lenth of array: ");
    scanf("%d",&n);
    int arr[n],min,second_min;

    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(arr[0]<arr[1]){
        min=arr[0];
        second_min=arr[1];
    }
    else{
        min=arr[1];
        second_min=arr[0];
    }

    for(i=2;i<n;i++){
        if(arr[i]<min){
            second_min=min;
            min=arr[i];
        }
        else{
            if(arr[i]<second_min)
                second_min=arr[i];
        }
    }
    printf("The second smallest number in the array is %d",second_min);
    return 0;
}