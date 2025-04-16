#include <stdio.h>

int main() {
    int n, x, count = 0;
    
    // Nhập số lượng phần tử của mảng
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Nhập phần tử cần đếm
    printf("Nhập phần tử x cần đếm số lần xuất hiện: ");
    scanf("%d", &x);
    
    // Đếm số lần xuất hiện của x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    
    // In kết quả
    printf("Phần tử %d xuất hiện %d lần trong mảng.\n", x, count);
    
    return 0;
}
