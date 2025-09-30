// Write a program to swap two numbers using a third variable.
# include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number \n");
    scanf("%d",&a);
    printf("enter second number \n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
    return 0;
}