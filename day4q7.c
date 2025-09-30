// Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter first number \n");
    scanf("%d",&a);
    printf("enter second number \n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
    return 0;
}