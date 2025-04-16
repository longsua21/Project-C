#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double x, tu, mau, sinx = 0.0;
    int dau = 1;

    printf("Nhap x (radian): ");
    scanf("%lf", &x);
    printf("Nhap so luong so hang n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int mu = 2 * i + 1;

        tu = pow(x, mu);        // x^mu
        mau = 1;

        for (int j = 1; j <= mu; j++) {
            mau *= j;           // tính giai thừa
        }

        sinx += dau * (tu / mau); // cộng/trừ xen kẽ
        dau *= -1;                // đổi dấu
    }

    printf("Gia tri gan dung sin(%.2lf) = %.6lf\n", x, sinx);
    printf("Gia tri sin tu math.h = %.6lf\n", sin(x)); // kiểm chứng

    return 0;
}
