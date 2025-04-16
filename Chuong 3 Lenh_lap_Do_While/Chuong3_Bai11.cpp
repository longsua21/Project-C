#include <stdio.h>

int main() {
    int n, soDaoNguoc = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("So am khong duoc xem la doi xung.\n");
        return 0;
    }

    int tam = n; 

    while (tam != 0) {
        soDaoNguoc = soDaoNguoc * 10 + tam % 10;
        tam /= 10;
    }

    if (soDaoNguoc == n)
        printf("%d la so doi xung.\n", n);
    else
        printf("%d khong phai la so doi xung.\n", n);

    return 0;
}

