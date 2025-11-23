// Q72: Find the sum of all elements in a matrix.

#include<stdio.h>
int main(){

    int A[100][100];
    int m, n, i, j, sum = 0;
    printf("Enter the order of matrix A (row,column) = ");
    scanf("%d %d",&m,&n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order: \n",m,n);
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){
            scanf("%d",&A[i][j]);
            sum += A[i][j];
        }
    }

    printf("Sum of all elements of matrix is %d",sum);

    return 0;
}