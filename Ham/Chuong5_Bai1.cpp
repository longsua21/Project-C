#include <stdio.h>

// Hàm tính x^y
int power(int x, int y) {
    int result = 1;
    for(int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);

    int kq = power(x, y);
    printf("Gia tri cua %d^%d = %d\n", x, y, kq);
    return 0;
}

