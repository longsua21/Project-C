#include <stdio.h>

int main() {
    int n, soDaoNguoc = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int tam = n; 

    if (n < 0) {
        printf("So am, khong xu ly dao nguoc!\n");
        return 0;
    }

    while (n != 0) {
        soDaoNguoc = soDaoNguoc * 10 + n % 10;
        n /= 10;
    }

    printf("So dao nguoc cua %d la: %d\n", tam, soDaoNguoc);

    return 0;
}

