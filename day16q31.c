// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    }

    int binary = 0; 
    int place = 1;      

    while (n > 0) {
        int rem = n % 2;          
        binary = binary + rem * place; 
        n = n / 2;                
        place = place * 10;       
    }

    printf("%d", binary);

    return 0;
}