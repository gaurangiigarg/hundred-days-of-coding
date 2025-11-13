// Q24: Write a program to calculate an electricity bill based on units consumed.

/*First 100 units → ₹5 per unit
  Next 100 units (101–200) → ₹9 per unit
  Beyond 200 units → ₹16 per unit*/

#include<stdio.h>
int main(){

    int units,bill;
    printf("Enter the amount of units consumed=");
    scanf("%d",&units);

    if(units>=1 && units<=100){
        bill=units*5;
    }else if(units>101 && units<=200){
        bill= (100 * 5) + (units - 100) * 9;
    }else if(units>200){
        bill= (100 * 5) + (100 * 9) + (units - 200) * 16;
    }
    printf("Bill is Rs%d",bill);
    
    return 0;
}