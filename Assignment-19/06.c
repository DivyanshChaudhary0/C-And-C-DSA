
//WAF to swap two elements with specified indices...

#include<stdio.h>
int swap(int a[],int i1,int i2);

int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    swap(a,2,3);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

int swap(int a[],int i1,int i2){
    int t = a[i1];
    a[i1] = a[i2];
    a[i2] = t;
}