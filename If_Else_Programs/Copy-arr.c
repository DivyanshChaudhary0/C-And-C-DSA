
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
       b[i]=a[n-i-1];
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}