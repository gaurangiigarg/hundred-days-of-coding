// Q18: Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main(){

    float P;
    printf("Enter the percentage=");
    scanf("%f",&P);

    
    if(P>=90 && P<=100){
        printf("Grade A");
    }else if(P>=80 && P<90){
        printf("Grade B");
    }else if(P>=70 && P<80){
        printf("Grade C");
    }else if(P>=60 && P<70){
        printf("Grade D");
    }else{
        printf("Grade F");
    }

    return 0;
}