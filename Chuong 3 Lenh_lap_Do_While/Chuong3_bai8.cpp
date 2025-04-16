#include <stdio.h>

int main() {
    int n, i, tong = 0, dem = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 2 != 0) {
            tong += i;
            dem++;
        }
    }

    printf("Co %d so chia het cho 3 nhung khong chia het cho 2 trong khoang tu 1 den %d.\n", dem, n);
    printf("Tong cua cac so do la: %d\n", tong);

    return 0;
}

