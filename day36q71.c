// Q71: Read and print a matrix.

#include<stdio.h>
int main(){

    int A[100][100];
    int m, n, i, j;
    printf("Enter the order of matrix A (row,column) = ");
    scanf("%d %d",&m,&n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order: \n",m,n);
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nMartix A (%d x %d): \n",m,n);
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}