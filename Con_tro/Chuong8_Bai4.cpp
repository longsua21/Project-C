#include <stdio.h>

int main() {
    int a[100], n;

    // Nhap so luong phan tu
    printf("Nhap so luong phan tu cua mang (toi da 100): ");
    scanf("%d", &n);

    // Nhap các phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Sap xep mang theo thu tu tang dan (bubble sort)
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                // Hoán doi a[i] và a[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // In mang dã sap xep
    printf("\nMang sau khi sap xep tang dan:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}

