
// WAF to sort of an array of any size...

#include<stdio.h>
void sort_array(int a[],int n);

int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort_array(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

void sort_array(int a[],int n){     // 20,25,10,35,30
    int i,r,temp;
    for(r=1;r<n;r++){
        for(i=0;i<n-r;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}