
// WAP to sort the array in decending order...

#include<stdio.h>
int main(){
    int n,r,temp;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(r=1;r<n;r++){
        for(i=0;i<n-r;i++){
            if(arr[i]<arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}