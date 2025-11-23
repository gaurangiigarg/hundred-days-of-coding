// Merge two arrays.
# include <stdio.h>
int main()
{
    int n,m,i,j;
    
    printf("Enter the number of elements of array1: ");
    scanf("%d", &n);
    
    int arr1[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements of array 2: ");
    scanf("%d", &m);
    
    int arr2[m];
    printf("Enter %d elements:\n", m);
    for(j = 0; j < m; j++) {
        scanf("%d", &arr2[j]);
    }
    int merged[n+m];
    for(i=0;i<n;i++)
    {
        merged[i]=arr1[i];
    }
    for(j=0;j<m;j++)
    {
        merged[n+j]=arr2[j];
    }
    printf("merged array is:\n");
    for(i=0;i<n+m;i++)
    {
        printf(" %d",merged[i]);
    }
    return 0;
}