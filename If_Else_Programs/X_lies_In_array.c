

#include<stdio.h>
int main(){
    int n,i,x;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter X (The number): ");
    scanf("%d",&x);
    
    int check,idx;
    for(i=0;i<n;i++)
        if(a[i]==x){
            check=1;
            idx=i;
            break;
        }
    if(check==1)
        printf("%d is present in the array and index is %d",x,idx);
    else
        printf("%d is not present in the array and index is %d",x,idx);
    return 0;
}