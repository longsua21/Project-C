#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool laSoNguyenTo(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (laSoNguyenTo(n))
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai la so nguyen to.\n", n);

    return 0;
}

