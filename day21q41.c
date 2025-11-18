//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, n, first, last, powTen = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;
    last = n % 10;         
    while (n >= 10) {
        n /= 10;           
        powTen *= 10;      
    }
    first = n;              
    
    int result = (last * powTen) + (num % powTen) - last + first;                

    printf("%d\n", result);

    return 0;
}