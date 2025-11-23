// Q67: Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    
    int n, pos, element;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers = ",n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the postion and element: ");
    scanf("%d %d", &pos, &element);

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[pos] = element; 
    n++; 
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}