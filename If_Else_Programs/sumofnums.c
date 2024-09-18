
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("The sum is %d",sum);
    return 0;
}