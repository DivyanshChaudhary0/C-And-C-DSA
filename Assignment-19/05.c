
//WAF to find the first adjacent duplicate value...

#include<stdio.h>
int fnc(int a[],int n);

int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int num = fnc(a,n);
    printf("The first duplicate number is %d ",num);
    return 0;
}

int fnc(int a[],int n){
    int i;
    for(i=0;i<n-1;i++)
        if(a[i]==a[i+1])
            return a[i];
}