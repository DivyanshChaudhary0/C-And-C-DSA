
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter lenth of array: ");
    scanf("%d",&n);
    int arr[n];
    float avg,sum;

    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg = sum/n;

    printf("The average is %0.2f",avg);
    return 0;
}