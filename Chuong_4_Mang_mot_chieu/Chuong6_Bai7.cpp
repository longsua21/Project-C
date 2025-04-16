#include <stdio.h>

void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    sortArray(arr, n);
    
    printf("\nSorted array (ascending order): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
