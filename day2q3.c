// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
# include <stdio.h>
int main()
{
    int l,b,c,d;
    printf("enter the length of rectangle\n");
    scanf("%d",&l);
    printf("enter the breadth of rectangle\n");
    scanf("%d",&b);
    c = 2*(l+b);
    d = l*b;
    printf("the perimeter of rectangle is %d \n",c);
    printf("the area of reactangle is %d",d);
    return 0;

}