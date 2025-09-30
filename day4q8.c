// Write a program to find and display the sum of the first n natural numbers.
# include <stdio.h>
int main()
{
    int a,b,i;
    a=0;
    printf("enter the number\n");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    a=a+i;
    printf("the sum of %d natural numbers is: %d \n",b,a);
    return 0;


}