/*
5
45
345
2345
12345
*/
# include <stdio.h>
int main()
{
    int i,j,c;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            c=5+j;
            printf("%d",c-i);
        }
        printf("\n");
    }
    return 0;
}