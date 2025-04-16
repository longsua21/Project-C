#include <stdio.h>

int main() {
    int n, i, j;
    double S = 1.0;  // bắt đầu từ 1
    long long giaithua;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui long nhap n >= 1\n");
        return 0;
    }

    for (i = 2; i <= n; i++) {
        giaithua = 1;
        for (j = 1; j <= i; j++) {
            giaithua *= j;
        }
        S += 1.0 / giaithua;
    }

    printf("Tong S = %.6lf\n", S);

    return 0;
}
