

#include<stdio.h>
void f1();

int main(){
    f1();
    return 0;
}

void f1(){
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("Enter 9 numbers for first matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("\nEnter 9 numbers for second matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            for(k=0,sum=0;k<3;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }
        printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}