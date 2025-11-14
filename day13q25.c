// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
int main(){

    int A,B,op;
    char ch;
    printf("Enter two numbers=");
    scanf("%d %d",&A,&B);
    printf("Operation to be performed= ");
    scanf(" %c",&ch);  // Notice the space before %c

    switch(ch)
    {
        case '+':
        printf("%d",A+B);
        break;
        case '-':
        printf("%d",A-B);
        break;
        case '*':
        printf("%d",A*B);
        break;
        case '/':
        if (B!= 0){
            printf("%d",A/ B);
        }else{
            printf("Error: Division by zero");
        }
        break;
        case '%':
        if (B!= 0){
            printf("%d\n",A%B);
        }else{
            printf("Error: Modulo by zero\n");
        }
        break;
    }
    
    return 0;
}