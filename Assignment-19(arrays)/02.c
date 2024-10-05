
// WAF to find the smallest number in the array...

#include<stdio.h>
int find_smallest(int a[]);

int main(){
    int a[5]={10,20,30,40,50};
    int smallest = find_smallest(a);
    printf("%d",smallest);
    return 0;
}

int find_smallest(int a[]){
    int min=a[0];
    for(int i=1;i<5;i++){
        if(min>a[i])
            min=a[i];
    }
    return min;
}