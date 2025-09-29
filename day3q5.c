// Write a program to convert temperature from Celsius to Fahrenheit.
# include <stdio.h>
int main()
{
    float c,f;
    printf("enter the temperature in celsius \n");
    scanf("%f",&c);
    f = (c*(9.0/5))+32;
    printf("The temperature in fahrenheit is: %.2f",f);
    return 0;

}