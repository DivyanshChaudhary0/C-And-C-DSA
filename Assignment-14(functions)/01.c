
#include<stdio.h>
float areaOfCircle(int);

int main(){
    int r;
    printf("Enter Radius: ");
    scanf("%d",&r);
    float area = areaOfCircle(r);
    printf("Area of circle is %0.2f ",area);
    return 0;
}

float areaOfCircle(int x){
    float a = 3.14*x*x;
    return a;
}