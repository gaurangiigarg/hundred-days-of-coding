/*
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
# include <stdio.h>
int main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        for(j=1;j<6;j++)
        {
            if(i>j)
            {
                printf(" ");
            }
            else
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}