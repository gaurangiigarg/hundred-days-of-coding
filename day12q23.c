// Q23: Write a program to calculate a library fine based on late days.

/*1 to 5 days late → ₹2 per day
  6 to 10 days late → ₹4 per day
  11 to 30 days late → ₹6 per day
  More than 30 days late → Membership Cancelled*/

#include<stdio.h>
int main(){

    int days,fine;
    printf("Enter the no. of days book is late=");
    scanf("%d",&days);

    if(days>=1 && days<=5){
        fine=days*2;
        printf("Fine is Rs%d",fine);
    }else if(days>5 && days<=10){
        fine=days*4;
        printf("Fine is Rs%d",fine);
    }else if(days>10 && days<=30){
        fine=days*6;
        printf("Fine is Rs%d",fine);
    }else if(days>30){
        printf("Membership Cancelled");
    }else{
        printf("No Fine!");
    }

    return 0;
}