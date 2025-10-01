// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
# include <stdio.h>
int main()
{
    int t,h,m,s;
    printf("enter time in seconds");
    scanf("%d",&t);
    h=t/3600;
    m=(t%3600)/60;
    s=t%60;
    printf("Time: %02d:%02d:%02d",h,m,s);
    return 0;
}