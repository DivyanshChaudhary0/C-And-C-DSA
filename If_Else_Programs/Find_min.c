
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int MIN = a[0];  //1

    for(i=1;i<n;i++){
        if(MIN>a[i])
            MIN=a[i];
    }
    printf("The manimum number in the array is %d",MIN);
    return 0;
}