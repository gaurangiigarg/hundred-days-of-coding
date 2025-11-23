// Find the maximum and minimum element in an array.
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
    int max = arr[0];
    int min = arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("The maximum element of an array is: %d\n",max);
    printf("The minimum element of an array is: %d\n",min);
    return 0;
}