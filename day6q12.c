// input an integer and check whether it is positive, negative or zero using nested if–else.
# include <stdio.h>
int main()
{
    int a;
    printf("enter the number: \n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("the entered number is positive\n");
    }
    else if(a==0)
    {
        printf("the entered number is zero\n");
    }
    else 
    {
        printf("the entered number is negative\n");
    }
    return 0;
}


