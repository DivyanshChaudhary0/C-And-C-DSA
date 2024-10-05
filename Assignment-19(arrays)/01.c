
// WAF to find the greatest number in the array...

#include<stdio.h>
int find_greatest(int a[]);

int main(){
    int a[5]={10,20,30,40,50};
    int greatest = find_greatest(a);
    printf("%d",greatest);
    return 0;
}

int find_greatest(int a[5]){
    int max=a[0];
    for(int i=1;i<5;i++){
        if(max<a[i])
            max=a[i];
    }
    return max;
}