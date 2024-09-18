
// input selling and cost price from user and find the profit orr loss percentage...

#include<stdio.h>
int main(){

    int cp,sp,loss,profit;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);
    printf("Enter Sell Price: ");
    scanf("%d",&sp);

    if(cp>sp){
        printf("Loss of %d rupees\n",cp-sp);
        printf("The Loss Percentage is %0.2f",(cp-sp)/100.0);
    }
    else{
        printf("Profit of %d rupees\n",sp-cp);
        printf("The Profit Percentage is %.2f",(sp-cp)/100.0);
    }

    return 0;
}