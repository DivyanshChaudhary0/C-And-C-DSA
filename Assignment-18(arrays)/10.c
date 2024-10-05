
//WAP to copy an array to another array...

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }

    return 0;
}
