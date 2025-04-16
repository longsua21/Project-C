#include <stdio.h>

int main() {
    int n, i;
    long long giaithua = 1;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong tinh giai thua cho so am.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        giaithua *= i;
    }

    printf("%d! = %lld\n", n, giaithua);

    return 0;
}
