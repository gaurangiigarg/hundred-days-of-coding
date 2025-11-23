// Find the digit that occurs the most times in an integer number.
# include <stdio.h>
int main()
{
    int num;
    int count[10] = {0};  
    printf("Enter the integer = ");
    scanf("%d", &num);

    while (num > 0) {
        count[num % 10]++;   
        num /= 10;
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}