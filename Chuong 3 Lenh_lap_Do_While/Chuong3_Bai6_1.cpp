#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Nhap hai so nguyen a va b: ");
    scanf("%d%d", &a, &b);

    int u = ucln(a, b);
    int bcnn = (a * b) / u;

    printf("UCLN cua %d va %d la: %d\n", a, b, u);
    printf("BCNN cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
}

