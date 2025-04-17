#include <stdio.h>

int main() {
    int a[100], n;
    int min, max;

    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang (toi da 100): ");
    scanf("%d", &n);

    // Nhap gi� tri c�c phan tu
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Khoi tao min v� max l� phan tu dau ti�n
    min = max = a[0];

    // T�m min v� max
    for(int i = 1; i < n; i++) {
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }

    // In ket qua
    printf("\nPhan tu nho nhat: %d\n", min);
    printf("Phan tu lon nhat: %d\n", max);

    return 0;
}

