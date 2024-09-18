
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int MAX = a[0];  //1

    for(i=1;i<n;i++){
        if(MAX<a[i])
            MAX=a[i];
    }
    printf("The maximum number in the array is %d",MAX);
    return 0;
}