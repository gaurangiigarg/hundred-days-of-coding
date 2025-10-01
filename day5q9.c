// Write a program to calculate simple and compound interest for given principal, rate, and time.
# include <stdio.h>
# include <math.h>
int main()
{
    float p,r,t,si,ci;
    printf("enter the principal amount\n");
    scanf("%f",&p);
    printf("enter the rate\n");
    scanf("%f",&r);
    printf("enter the time period\n");
    scanf("%f",&t);
    si = (p*r*t)/100 ;
    ci = p* (pow((1 + r/ 100),t)) - p;
    printf("the value of simple interst is: %.2f\n",si);
    printf("the value of compound interst is: %.2f \n",ci);
    return 0;
}