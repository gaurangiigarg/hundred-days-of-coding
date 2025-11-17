//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    
    int n, og, rem, result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    og = n;

    while (n!=0) {
        rem =n%10;               
        result =result+(rem * rem * rem); 
        n= n/10;              
    }

    if (result == og)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}