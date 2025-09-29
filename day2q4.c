// Write a program to calculate the area and circumference of a circle given its radius.
# include <stdio.h>
int main()
{
    float r,c,a;
    printf("enter the radius of circle :\n");
    scanf("%f",&r);
    c =(float) 2*3.14*r;
    a =(float) 3.14 *r*r;
    printf("the circumference of circle is %f \n",c);
    printf("the area of circle is %f \n",a);
    return 0;
}