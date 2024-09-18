
//WAP to find second largest number in the array

#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter lenth of array: ");
    scanf("%d",&n);
    int arr[n],max,second_max;

    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(arr[0]>arr[1]){
        max=arr[0];
        second_max=arr[1];
    }
    else{
        max=arr[1];
        second_max=arr[0];
    }

    for(i=2;i<n;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }
        else{
            if(arr[i]>second_max)
                second_max=arr[i];
        }
    }

    printf("The second largest number in the array is %d",second_max);

    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int i, n, r, temp;
//     printf("Enter lenth of array: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter %d numbers: ", n);
//     for (i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     for (r=1; r<=n-1; r++){
//         for (i=0; i<n-r; i++){
//             if(arr[i]>arr[i+1]){
//                 temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//     }

//     printf("Second largest number is %d",arr[n-2]);
//     return 0;
// }