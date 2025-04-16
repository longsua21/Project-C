#include <stdio.h>

int main() {
    int n, i;
    long long f0 = 0, f1 = 1, fn;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci khong xac dinh cho n < 0\n");
        return 0;
    }

    if (n == 0) {
        fn = 0;
    } else if (n == 1) {
        fn = 1;
    } else {
        for (i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    }

    printf("Fibonacci F(%d) = %lld\n", n, fn);

    return 0;
}
