#include <stdio.h>

int main() {
    int a[10];

    // Nhap mang tu bàn phím
    printf("Nhap 10 phan tu cua mang:\n");
    for(int i = 0; i < 10; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // In mang theo hàng ngang
    printf("\nMang vua nhap la:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}

