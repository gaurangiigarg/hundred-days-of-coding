//Q37: Write a program to find the LCM of two numbers.

#include<stdio.h>
int main(){

    int a,b,LCM;
    printf("Enter numbers a and b=");
    scanf("%d %d",&a,&b);

    LCM= (a>b) ? a : b;

        while (1) {
        if (LCM % a == 0 && LCM % b == 0) {
            printf("LCM of %d and %d is %d\n", a, b, LCM);
            break;
        }
        LCM++;
    }
    
    return 0;
}