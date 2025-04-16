#include <stdio.h>

int main() {
    int arr[10];

    // Nh?p m?ng
    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++) {
        printf("Phan tu arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // In m?ng theo chi?u d?o ngu?c
    printf("Mang theo chieu dao nguoc:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

