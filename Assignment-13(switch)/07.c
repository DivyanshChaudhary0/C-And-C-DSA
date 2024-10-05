
#include<stdio.h>
#include<stdlib.h>
int main(){

    int choice,n,sum=0,r,temp,i;

    while(1){
        printf("\n1. Calculate LCM of two Numbers \n");
        printf("2. Sum of digits of a number \n");
        printf("3. Volume of cuboid \n");
        printf("4. Check whether a number is prime or not\n");
        printf("5. Exit \n");

        printf("\n Enter Choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                int a,b;
                printf("\nEnter Two Numbers: ");
                scanf("%d %d",&a,&b);
                for(i=(a>b?a:b);i<=a*b;i++){
                    if(i%a==0 && i%b==0)
                        printf("LCM is %d",i);
                        break;
                }
                break;

            case 2:
                // int n,sum=0,r,temp;
                printf("\nEnter a Number: ");
                scanf("%d",&n);
                temp=n;

                while(n){
                    r=n%10;
                    sum=sum+r;
                    n=n/10;
                }
                printf("Sum of %d is %d",temp,sum);
                break;

            case 3:
                int l,bh,h;
                printf("\nEnter length,bredth and height: ");
                scanf("%d %d %d",&l,&bh,&h);

                printf("Volume of Cuboid is %d",l*bh*h);
                break;

            case 4:
                // int n,i;
                printf("\nEnter number: ");
                scanf("%d",&n);

                for(i=2;i<n;i++){
                    if(n%i==0)
                        break;
                }
                if(i==n)
                    printf("%d is prime number",n);
                else
                    printf("%d is not prime number",n);
                break;

            case 5: exit(0);
        }
    }
    
    return 0;
}