
// Find the manimium element and index of a 2D Array...?

#include<stdio.h>
int main(){
    int arr[2][3]={{10,20,100},{32,42,45}};
    int a,b;
    int MIN = arr[0][0];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(MIN>arr[i][j]){
                a=i;
                b=j;
                MIN = arr[i][j];
            }
        }
    }

    printf("The maximum number is %d and index is (%d,%d)",MIN,a,b);
    return 0;
}