// Count positive, negative, and zero elements in an array.
# include <stdio.h>
int main()
{
   int i,n,pos=0,neg=0,zero=0;
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
        if(arr[i]==0)
        {
            zero+=1;
        }
        else if(arr[i]>0)
        {
            pos+=1;
        }
        else
        {
            neg+=1;
        }
   }
   printf("The number of positive elements is:%d\n",pos);
   printf("The number of zero elements is:%d\n",zero);
   printf("The number of negative elements is:%d\n",neg);
   return 0;
}    