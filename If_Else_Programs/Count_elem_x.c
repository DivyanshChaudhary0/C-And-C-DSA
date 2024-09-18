
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],even_Sum=0,odd_Sum=0;
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(i%2==0)
            even_Sum=even_Sum+a[i];
        else
            odd_Sum=odd_Sum+a[i];
    }
    printf("The difference is %d",even_Sum-odd_Sum);
    return 0;
}