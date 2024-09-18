
#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);
    if(cp>sp){
        int loss = cp - sp;
        printf("LOSS of %d rupees\n",loss);
        printf("THE LOSS PERCENTAGE IS %2f",(loss*100.0)/cp);
    }
    else{
        int profit = sp - cp;
        printf("PROFIT OF %d RUPEES\n",profit);
        printf("THE PROFIT PERCENTAGE IS %2f",(profit*100.0)/cp);
    }
    return 0;
}