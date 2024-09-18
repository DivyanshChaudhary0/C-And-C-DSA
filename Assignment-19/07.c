
// WAF to count total number of duplicate elements in an array...

#include<stdio.h>
int sum_of_duplicates(int a[],int n);
void sort(int a[],int n);

int main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int sum = sum_of_duplicates(a,n);
    printf("The number of duplicate elements is %d",sum);
    return 0;
}

int sum_of_duplicates(int a[],int n){
    sort(a,n);
    int i=0,j=1,count=0;
    while(i<n-1){
        if(a[i]==a[j])
            count++;
        while(a[i]==a[j])
            j++;
        i=j;
        j=j+1;
    }
    return count;
}

void sort(int a[],int n){
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