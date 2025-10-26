// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){

    int S1,S2,S3;
    printf("Enter Side 1= ");
    scanf("%d",&S1);
    printf("Enter Side 2= ");
    scanf("%d",&S2);    
    printf("Enter Side 3= ");
    scanf("%d",&S3);

    if(((S1+S2)>S3) && ((S2+S3)>S1) && ((S1+S3)>S2)){
        printf("It is a valid traiangle. \n");
    if((S1==S2) &&(S2==S3)){
        printf("Equilateral triangle. \n ");
    }else if((S1==S2)|| (S2==S3) || (S3==S1)){
        printf("Isosceles triangle. \n ");
    }else{
        printf("Scalene triangle. "); 
    }
    }else{
        printf("It is not a valid triangle.");
    }
    return 0;
}