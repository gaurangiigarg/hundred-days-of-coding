// Q35: Write a program to print all factors of a given number.

#include<stdio.h>
int main(){

    int N,D;
    printf("Enter the number=");
    scanf("%d",&N);

    D=1;
    while(D<=N){
        if(N%D==0){
        printf("%d ",D);
        }
      D=D+1;
    }
    
    return 0;
}