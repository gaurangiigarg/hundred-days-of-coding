// Count even and odd numbers in an array.
# include <stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("odd numbers:%d\n",odd);
    printf("Even numbers:%d\n",even);
    return 0;
}