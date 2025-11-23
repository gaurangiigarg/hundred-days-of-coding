// Reverse an array without taking extra space
# include <stdio.h>
int main()
{
    int n,i,j,m;
    printf("enter the number of elements in your array:\n");
    scanf("%d",&n);
    int arr[n];
    int reverse[m];
    m=n;
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i<=0;i--)
    {
        for(j=0;j<m;j++)
        {
            arr[i]=arr[j];
        }
    }
    printf("Entered Array is:%d\n",arr[n]);
    printf("Reversed Array is %d\n",reverse[m]);
    return 0;   
}