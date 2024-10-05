
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int choice, num;

    while (1)
    {
        printf("1. Factorial of a number\n");
        printf("2. Check Even orr Odd \n");
        printf("3. Area of Circle \n");
        printf("4. Sum of first N natural Numbers\n");
        printf("5. Exit \n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("Enter a Number: ");
                scanf("%d",&num);
                int fact=1;
                for(int i=1;i<=num;i++){
                    fact = fact*i;
                }
                printf("Factorial is %d\n",fact);
                break;
            case 2:
                printf("Enter a Number: ");
                scanf("%d",&num);
                if(num%2==0)
                    printf("%d is Even Number\n",num);
                else
                    printf("%d is Odd Number\n",num);
                break;
            case 3:
                printf("Enter radius: ");
                scanf("%d",&num);
                printf("Area of circle is %.2f\n",3.14*num*num);
                break;
            case 4:
                printf("Enter a Number: ");
                scanf("%d",&num);
                int sum=0;
                for(int i=1;i<=num;i++){
                    sum = sum+i;
                }
                printf("The sum is %d\n",sum);
                break;
            case 5: exit(0);
            default: printf("Invalid Choice");
        }
    }
    return 0;
}