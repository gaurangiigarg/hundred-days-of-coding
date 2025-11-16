// Q32: Write a program to check if a number is a palindrome.

#include<stdio.h>
int main(){

    int n,x,y=0,og;
    printf("Enter a number=");
    scanf("%d",&n);

    og=n;

    while(n>0){
        x=n%10;
        n=n/10;
        y=y*10+x;
    }
    
    if(og==y){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }

    return 0;
}