
// WAF to rotate an array by n position in d direction...

#include<stdio.h>
void rotate_array(int a[],int size,int n,int d);

int main(){
    int size,n,d,i;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("Enter direction (1 or -1): ");
    scanf("%d",&d);
    printf("Enter position you want to rotate: ");
    scanf("%d",&n);
    rotate_array(a,size,n,d);
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    return 0;
}

void rotate_array(int a[],int size,int n,int d){
    int i,temp;
    if(d==1){
        while(n>0){
            temp = a[size-1];
            for(i=size-1;i>=0;i--)
                a[i]=a[i-1];
            a[0]=temp;
            n--;
        }
    }
    else{
        while(n>0){
            temp = a[0];
            for(i=0;i<size-1;i++)
                a[i]=a[i+1];
            a[size-1]=temp;
            n--;
        }
    }
}