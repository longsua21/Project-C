#include <stdio.h>

// Hàm d? quy tính s? Fibonacci th? n
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap vi tri n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vi tri n phai >= 0\n");
    } else {
        printf("Fibonacci tai vi tri %d la: %d\n", n, fibonacci(n));
    }

    return 0;
}

