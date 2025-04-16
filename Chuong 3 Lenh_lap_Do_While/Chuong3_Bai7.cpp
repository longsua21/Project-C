#include <stdio.h>

int main() {
    int n, i;
    float S = 0.0;

    printf("Nhap N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap N > 0.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        S += 1.0 / i;
    }

    printf("Tong S = %.4f\n", S);

    return 0;
}
