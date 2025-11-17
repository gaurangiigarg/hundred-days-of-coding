//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    
    int number, product= 1,digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        digit = number % 10; 
        if (digit % 2 != 0) {
            product*= digit; 
        }
        number /= 10; 
    }

    printf("Product of odd digits: %d\n",product);

    return 0;
}