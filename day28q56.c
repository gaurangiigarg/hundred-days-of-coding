// Read and print elements of a one-dimensional array.
# include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements in your array is:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}