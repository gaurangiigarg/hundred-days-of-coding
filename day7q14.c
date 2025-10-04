// to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char a;
    printf("Enter the character:\n");
    scanf("%c", &a);

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        if (a=='a'|| a=='e' || a=='i' || a=='o'|| a=='u' ||
            a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
        {
            printf("It is a vowel\n");
        }
        else
        {
            printf("It is a consonant\n");
        }
    }
    else
    {
        printf("Not an alphabet, please enter alphabet\n");
    }

    return 0;
}

