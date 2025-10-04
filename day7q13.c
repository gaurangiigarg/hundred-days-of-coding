//  to input a year and check whether it is a leap year or not using conditional statements
# include <stdio.h>
int main()
{
    int a;
    printf("enter the year\n");
    scanf("%d",&a);
    if (a%400==0)
    {
        printf("it is a leap year\n");
    }
    else if(a%100==0)
    {
        printf("it is a non leap year\n");
    }
    else if(a%4==0)
    {
        printf("it is a leap year\n");
    }
    else 
    {
        printf("it is a non leap year\n");
    }
    return 0;
}