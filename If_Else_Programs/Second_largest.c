
// Second Largest number

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int MAX,SECOND_MAX;
    if(arr[0]>arr[1]){
        MAX = arr[0];
        SECOND_MAX = arr[1];
    }else{
        MAX = arr[1];
        SECOND_MAX = arr[0];
    }
    for(i=2;i<n;i++){
        if(MAX<arr[i]){
            SECOND_MAX = MAX;
            MAX=arr[i]; 
        }
        else if(arr[i]>SECOND_MAX){
            SECOND_MAX=arr[i];
        }
    }
    printf("The second largest element is %d",SECOND_MAX);
    return 0;
}