// to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
# include <stdio.h>
int main()
{
    char a;
    printf("enter the character\n");
    scanf("%c",&a);
    if (a>='a'&& a<='z')
    {
        printf("it is a lowercase alphabet\n");
    }
    else if(a>='A'&& a<='Z')
    {
        printf("it is an uppercase alphabet\n");
    }
    else if(a>='0' && a<='9')
    {
        printf("it is a digit");
    }
    else
    {
        printf("it is a special character");
    }
    return 0;
}