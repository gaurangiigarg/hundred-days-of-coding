// Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){

    float a,b,c,D,R1,R2;
    printf("Enter the cofficients of ax^2+bx+c= ");
    scanf("%f %f %f",&a,&b,&c);

    D=b*b-4*a*c;

    if(D>0){
        R1=(-b+sqrt(D))/(2*a);
        R2=(-b-sqrt(D))/(2*a);
        printf("Roots are different and real= %f & %f",R1,R2);
    }else if(D==0){
        R1=-b/(2*a);
        R2=-b/(2*a);
        printf("Roots are different and real= %f & %f",R1,R2);
    }else{
        printf("Roots are complex.");
    }

    return 0;
}