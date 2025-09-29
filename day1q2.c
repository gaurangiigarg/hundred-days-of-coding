// Write a program to input two numbers and display their sum, difference, product, and quotient.
# include <stdio.h>
int main()
{
    int a,b,c,d,e;
    float f;
    printf("enter first number\n");
    printf("enter second number\n");
    scanf("%d%d",&a,&b);
    c= a+b;
    d = a-b;
    e = a*b;
    f =(float) a/b;
    printf("the sum of both numbers is %d \n", c);
    printf("the difference of both numbers is %d \n",d);
    printf("the product of both numbers is %d \n",e);
    printf("the quotient of numbers is %f \n",f);
    return 0;
}