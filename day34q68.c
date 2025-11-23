
// Q68: Delete an element from an array.

#include <stdio.h>
int main() {
    
    int n, pos;
    int arr[100]; 
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers = ",n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the index position of which element is to be deleted = " );
    scanf("%d", &pos);

    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
