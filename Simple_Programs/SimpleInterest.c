
#include<stdio.h>
int main()
{
    int p,r,t;
    float SI;
    printf("Enter Principal ,Rate and Time: ");
    scanf("%d %d %d",&p,&r,&t);
    SI = (p*r*t)/100;
    printf("Simple Interest is %.2f",SI);
    return 0;
}