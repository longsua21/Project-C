#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float D, Dx, Dy, x, y;

    printf("Nhap he so a, b, c cho phuong trinh 1 (ax + by = c):\n");
    scanf("%f%f%f", &a, &b, &c);

    printf("Nhap he so d, e, f cho phuong trinh 2 (dx + ey = f):\n");
    scanf("%f%f%f", &d, &e, &f);

    D  = a*e - b*d;
    Dx = c*e - b*f;
    Dy = a*f - c*d;

    if (D != 0) {
        x = Dx / D;
        y = Dy / D;
        printf("He co nghiem duy nhat:\n");
        printf("x = %.2f, y = %.2f\n", x, y);
    } else {
        if (Dx == 0 && Dy == 0) {
            printf("He co vo so nghiem.\n");
        } else {
            printf("He vo nghiem.\n");
        }
    }

    return 0;
}

