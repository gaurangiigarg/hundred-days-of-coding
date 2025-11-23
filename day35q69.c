// Q69: Find the second largest element in an array.

#include<stdio.h>
int main(){

    int arr[100];
    int n, i, largest, second;

    printf("Enter the number of elements (max. 100) = ");
    scanf("%d",&n);

    if (n <2 || n > 100){
        printf("Enter atleast 2 numbers and not more than 100. \n");
        return 0;
    }

    printf("Enter %d integers = ", n);
    for(i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    if(arr[0] > arr[1]){
        largest = arr[0];
        second = arr[1];
    }else {
        largest = arr[1];
        second = arr[0];
    }

    for(i = 2 ; i < n; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    if (largest == second){
        printf("All the elements are the same or no second largest exist.\n");
    } else{
        printf("The second largest number is = %d\n",second);
    }
    
    return 0;
}