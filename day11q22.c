// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){

    float CP,SP,P,L,per;
    printf("Enter the selling price= ");
    scanf("%f",&SP);
    printf("Enter the cost price= ");
    scanf("%f",&CP);
    
    if(SP>CP){
        P=SP-CP;
        per=(P*100)/CP;
      printf("Profit %f%%",per);
    }else if(CP>SP){
        L=CP-SP;
        per=(L*100)/CP;
       printf("Loss %f%%",per); 
    }else{
        printf("No Profit & No Loss");
    }

    return 0;
}