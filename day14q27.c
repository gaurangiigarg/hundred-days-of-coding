//Q27: Write a program to print the sum of the first n odd nusummbers.

#include<stdio.h>
int main(){

    int n,sum=0;
    printf("Enter a number=");
    scanf("%d",&n);

    for( int i=1; i<2*n; i=i+2){
        sum=sum+i;
    }
    printf("The sum of first %d odd nos. are= %d",n,sum);

    return 0;
}