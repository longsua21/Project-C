#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so > 0\n");
        return 0;
    }

    // Lưu phần dư vào mảng
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Dang nhi phan: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
