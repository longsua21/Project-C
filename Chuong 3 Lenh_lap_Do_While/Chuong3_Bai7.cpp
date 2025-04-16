#include <stdio.h>

int main() {
    int n, dem = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int tam = n;

    if (n == 0) {
        dem = 1;
    } else {
        if (n < 0) n = -n;

        while (n != 0) {
            dem++;
            n /= 10;
        }
    }

    printf("So %d co %d chu so.\n", tam, dem);

    return 0;
}

