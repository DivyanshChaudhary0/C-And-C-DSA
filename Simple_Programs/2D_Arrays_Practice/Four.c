
// Find the maximun element and index of a 2D Array...?

#include<stdio.h>
int main(){
    int arr[3][2]={{1,2},{3,4},{10,20}};
    int a,b,MAX = arr[0][0];

    for(int i=0;i<3;i++)
        for(int j=0;j<2;j++)
            if(MAX<arr[i][j]){
                MAX = arr[i][j];
                a=i,b=j;
            }

    printf("The maximum number is %d and index is (%d,%d)",MAX,a,b);
    return 0;
}