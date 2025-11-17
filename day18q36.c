//Q36: Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main(){

    int a,b,N,D,r;
    printf("Enter the number a and b= ");
    scanf("%d %d",&a,&b);

    if(a>b){
        N=a , D=b;
    }else{
        N=b , D=a;
    }

    r=N%D;

    while(r!=0){
        N=D ;
        D=r;
        r=N%D;
    }
    
    printf("GCD of %d and %d is=%d",a,b,D);

    return 0;
}